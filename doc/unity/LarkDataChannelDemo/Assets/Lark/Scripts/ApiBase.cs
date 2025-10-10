using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

namespace lark
{
    // API基础类，提供HTTP请求的通用功能
    // API base class providing common HTTP request functionality
    public class ApiBase<ResultType>
    {
        // 复制UriBuilder对象
        // Copy UriBuilder object
        public static UriBuilder CopyUriBuilder(UriBuilder builder)
        {
            UriBuilder res = new UriBuilder();
            res.Host = builder.Host;
            res.Password = builder.Password;
            res.Path = builder.Path;
            res.Port = builder.Port;
            res.Query = builder.Query;
            res.Scheme = builder.Scheme;
            res.UserName = builder.UserName;
            res.Fragment = builder.Fragment;
            return res;
        }
        
        // HTTP协议
        // HTTP protocol
        public const string Scheme = "http";

        // 是否发生错误
        // Whether an error occurred
        public virtual bool IsError
        {
            get
            {
                return IsNetworkError || IsHttpError || IsParseJsonError;
            }
        }

        // 网络错误
        // Network error
        public bool IsNetworkError
        {
            get
            {
                return www != null ? www.isNetworkError : false;
            }
        }

        // HTTP错误
        // HTTP error
        public bool IsHttpError
        {
            get
            {
                return www != null ? www.isHttpError : false;
            }
        }

        // WWW错误信息
        // WWW error message
        public string WWWError
        {
            get
            {
                return www != null ? www.error : "";
            }
        }

        // 错误信息
        // Error message
        public virtual string Error
        {
            get
            {
                if (IsHttpError || IsNetworkError)
                {
                    return www != null ? www.error : "";
                } else if (IsParseJsonError)
                {
                    return ParseJsonError;
                } else
                {
                    return "";
                }
                
            }
        }

        // JSON解析错误
        // JSON parsing error
        public bool IsParseJsonError
        {
            get
            {
                return false;
            }
        }

        // JSON解析错误信息
        // JSON parsing error message
        public string ParseJsonError
        {
            get
            {
                return parseJsonError;
            }
        }
        private bool isParseJsonError = false;
        private string parseJsonError = "";

        // API响应对象
        // API response object
        protected ApiResponse<ResultType> ApiResponse
        {
            get
            {
                return apiResponse;
            }
        }
        private ApiResponse<ResultType> apiResponse = null;

        // readonly string host;
        // readonly int port;
        UnityWebRequest www = null;
        
        // 检查响应码是否成功
        // Check if response code is successful
        public bool IsCodeSuccess(int code)
        {
            return code == ApiResponse<ResultType>.RESPONSE_SUCCESS_LARK;
        }
        
        public ApiBase()
        {
        }

        // 测试URI构建
        // Test URI construction
        public void TestUri()
        {
            HttpQueryParam parm = new HttpQueryParam();
            parm.Add("tset1", "test2");
            parm.Add("test2", "23");

            UriBuilder builder = new UriBuilder();
            builder.Host = "192.168.1.50";
            builder.Port = 8088;
            builder.Scheme = "http";
            builder.Path = "test/test";
            builder.Query = parm.ToString();
            Debug.Log("==============tset url:" + builder.Uri);
        }

        // 创建基础的UriBuilder
        // Create base UriBuilder
        private UriBuilder CreateBuilder()
        {
            UriBuilder builder = new UriBuilder();
            // 连接服务器使用本地端口
            // Connect to server using local port
            // 127.0.0.1:8081
            builder.Host = "127.0.0.1";
            builder.Port = 8089;
            builder.Scheme = Scheme;
            return builder;
        }

        // 获取文本数据
        // Get text data
        protected IEnumerator GetText(string path, string query)
        {
            yield return Get(path, query);
            if (www != null)
            {
                if (www.isNetworkError || www.isHttpError)
                {
                    Debug.Log("============ http get failed" + www.error);
                    OnFailed(www.error);
                }
                else
                {
                    // Show results as text
                    // Debug.Log("============ get text success" + www.downloadHandler.text);
                    try
                    {
                        apiResponse = ApiResponse<ResultType>.ParseApiResponse(www.downloadHandler.text);
                    }
                    catch (Exception e)
                    {

                        Debug.LogWarning("path:" + path + ";failed" + e);
                    }
                    if (apiResponse != null)
                    {
                        parseJsonError = "";
                        isParseJsonError = false;
                        OnApiResponseSuccess(apiResponse);
                    }
                    else
                    {
                        parseJsonError = "Parse api response json failed. response:" + www.downloadHandler.text;
                        isParseJsonError = true;
                        OnFailed(parseJsonError);
                    }
                }
            }
        }

        // 获取纹理数据
        // Get texture data
        protected IEnumerator GetTexture(string path, string query)
        {
            UriBuilder builder = CreateBuilder();
            if (!builder.Host.Equals("") && !builder.Port.Equals(""))
            {
                builder.Path = path;
                builder.Query = query;

                www = new UnityWebRequest(builder.Uri);
                DownloadHandlerTexture texDl = new DownloadHandlerTexture(true);
                www.downloadHandler = texDl;
                //www.timeout = 1;
                yield return www.SendWebRequest();
                if (www != null)
                {
                    if (www.isNetworkError || www.isHttpError)
                    {
                        Debug.Log("get texture failed:" + www.error);
                    }
                    else
                    {
                        // Texture myTexture = DownloadHandlerTexture.GetContent(www);
                        Texture2D t = texDl.texture;
                        if (t != null)
                        {
                            Debug.Log("==================Get texture success");
                            OnTextureSuccess(t);
                        }
                        else
                        {
                            OnFailed("downlaod texture failed");
                        }
                    }
                }
            } else
            {
                Debug.Log("===========get texture failed. empty host");
                OnFailed("empty host");
            }
        }

        // 获取AssetBundle
        // Get AssetBundle
        protected IEnumerator GetAsset(string path, string query)
        {
            yield return Get(path, query);
            if (www != null)
            {
                if (www.isNetworkError || www.isHttpError)
                {
                    Debug.Log(www.error);
                    OnFailed(www.error);
                }
                else
                {
                    // Show results as text
                    AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(www);
                    OnAssetSuccess(bundle);
                }
            }
        }

        // 通用GET请求
        // Generic GET request
        protected IEnumerator Get(string path, string query) {
            UriBuilder builder = CreateBuilder();
            if (!builder.Host.Equals("") && !builder.Port.Equals(""))
            {
                builder.Path = path;
                builder.Query = query;
                // Debug.Log("==================================Get:" + builder.Uri);
                try
                {
                    www = UnityWebRequest.Get(builder.Uri);
                    www.timeout = 2;
                }
                catch (Exception e)
                {
                    Debug.Log("============== get exception:" + (builder.Host == null) + ";" + (builder.Host.Equals("")) + ";" + e.Message);
                    www = null;
                }
                if (www != null)
                {
                    //www.timeout = 1;
                    yield return www.SendWebRequest();
                }
            } else
            {
                //Debug.Log("===========get failed. empty host");
                OnFailed("empty host");
            }
        }

        // POST文本数据
        // POST text data
        protected IEnumerator PostText(string path, List<IMultipartFormSection> iparams)
        {
            UriBuilder builder = CreateBuilder();
            if (!builder.Host.Equals("") && !builder.Port.Equals(""))
            {
                builder.Path = path;

                if (iparams == null)
                {
                    iparams = new List<IMultipartFormSection>();
                }

                //List<IMultipartFormSection> data = new List<IMultipartFormSection>();
                //data.Add(new MultipartFormDataSection(formData));
                UnityWebRequest www = UnityWebRequest.Post(builder.Uri, iparams);
                www.timeout = 2;
                yield return www.SendWebRequest();

                if (www.isNetworkError || www.isHttpError)
                {
                    Debug.Log(www.error);
                    OnFailed(www.error);
                }
                else
                {
                    // Show results as text
                    // Debug.Log("============ post text success" + www.downloadHandler.text);
                    try
                    {
                        apiResponse = ApiResponse<ResultType>.ParseApiResponse(www.downloadHandler.text);
                    }
                    catch (Exception e)
                    {

                        Debug.LogWarning("path:" + path + ";failed" + e);
                    }

                    if (apiResponse != null)
                    {
                        parseJsonError = "";
                        isParseJsonError = false;
                        OnApiResponseSuccess(apiResponse);
                    }
                    else
                    {
                        parseJsonError = "Parse api response json failed. response:" + www.downloadHandler.text;
                        isParseJsonError = true;
                        OnFailed(parseJsonError);
                    }
                }
            } else
            {
                //Debug.Log("===========post failed. empty host");
                OnFailed("empty host");
            }
        }

        // API响应成功回调
        // API response success callback
        protected virtual void OnApiResponseSuccess(ApiResponse<ResultType> response)
        {
            // Debug.Log("=====================request success." + response.code);
        }

        // 纹理获取成功回调
        // Texture acquisition success callback
        protected virtual void OnTextureSuccess(Texture texture)
        {
            //Debug.Log("====================== on texture success");
        } 

        // AssetBundle获取成功回调
        // AssetBundle acquisition success callback
        protected virtual void OnAssetSuccess(AssetBundle bundle)
        {
            //Debug.Log("====================== on asset success");
        }

        // 请求失败回调
        // Request failure callback
        protected virtual void OnFailed(string error)
        {
            //Debug.Log("======================request failed.");
        }
    }
}
