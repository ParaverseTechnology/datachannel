using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace lark
{
    // API响应数据结构
    // API response data structure
    [System.Serializable]
    public class ApiResponse<T>
    {
        // 成功响应码
        // Success response code
        public const int RESPONSE_SUCCESS_LARK = 1000;
        
        // 解析API响应
        // Parse API response
        public static ApiResponse<T> ParseApiResponse(string res)
        {
            return JsonUtility.FromJson<ApiResponse<T>>(res);
        }

        // 响应码
        // Response code
        public int code;
        // 响应消息
        // Response message
        public string message;
        // 响应结果数据
        // Response result data
        public T result;
    }
}
