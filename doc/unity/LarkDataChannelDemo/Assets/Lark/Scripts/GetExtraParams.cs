using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace lark
{
    // 获取额外参数API类
    // Get extra parameters API class
    public class GetExtraParams : ApiBase<List<GetExtraParams.Params>>
    {
        // 参数数据结构
        // Parameter data structure
        [System.Serializable]
        public class Params
        {
            // 参数键
            // Parameter key
            public string paramKey;
            // 参数值
            // Parameter value
            public string paramVal;
        }

        // API方法路径
        // API method path
        private const string METHOD = "/taskInfo/getExtraParams";

        // 是否发生错误
        // Whether an error occurred
        public override bool IsError
        {
            get
            {
                return base.IsError || !IsResultSuccess;
            }
        }

        // 错误信息
        // Error message
        public override string Error
        {
            get
            {
                if (!base.Error.Equals(""))
                {
                    return base.Error;
                }
                else if (!IsResultSuccess)
                {
                    return Message;
                }
                else
                {
                    return "";
                }
            }
        }

        // 结果是否成功
        // Whether the result is successful
        public bool IsResultSuccess { get; private set; } = false;

        // 消息
        // Message
        public string Message { get; private set; } = "";

        // 额外参数列表
        // Extra parameters list
        public List<GetExtraParams.Params> extraParams { get; private set; } = null;

        // 发送请求
        // Send request
        public IEnumerator Send(string taskId)
        {
            HttpQueryParam param = new HttpQueryParam();
            param.Add("taskId", taskId);
            yield return GetText(METHOD, param.ToString());
        }

        // API响应成功回调
        // API response success callback
        protected override void OnApiResponseSuccess(ApiResponse<List<GetExtraParams.Params>> response)
        {
            base.OnApiResponseSuccess(response);
            // Debug.Log("============ taskInfo getExtraParams result:" + response.code + "; response:" + response.result.Count + " " + JsonUtility.ToJson(response.result[0]));
            if (IsCodeSuccess(response.code))
            {
                IsResultSuccess = true;
                Message = response.message;
                extraParams = response.result;
            }
            else
            {
                IsResultSuccess = false;
                Message = response.message;
                extraParams = null;
            }
        }

        // 请求失败回调
        // Request failure callback
        protected override void OnFailed(string error)
        {
            base.OnFailed(error);
            Debug.Log("OnFailed " + error);
            IsResultSuccess = false;
            Message = "";
            extraParams = null;
        }
    }
}
