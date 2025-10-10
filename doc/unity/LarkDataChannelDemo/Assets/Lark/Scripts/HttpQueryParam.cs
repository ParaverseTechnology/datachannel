using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace lark {
    // HTTP查询参数类
    // HTTP query parameter class
    public class HttpQueryParam
    {
        // 参数字典
        // Parameter dictionary
        private Dictionary<string, string> queryParams = new Dictionary<string, string>();

        // 添加参数
        // Add parameter
        public void Add(string key, string val)
        {
            queryParams.Add(key, val);
        }

        // 移除参数
        // Remove parameter
        public void Remove(string key)
        {
            queryParams.Remove(key);
        }

        // 获取参数值
        // Get parameter value
        public string Get(string key)
        {
            return queryParams[key];
        }

        // 转换为表单数据字符串
        // Convert to form data string
        public string ToFormDataString()
        {
            return ToString();
        }

        // 转换为字符串
        // Convert to string
        public override string ToString()
        {
            string res = "";
            foreach (string key in queryParams.Keys)
            {
                string val = queryParams[key];
                res += string.Format("{0:G}={1:G}&", key, val);
            }
            return res;
        }
    }
}
