using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace lark
{
    public class GetExtraParams : ApiBase<List<GetExtraParams.Params>>
    {
        [System.Serializable]
        public class Params
        {
            public string paramKey;
            public string paramVal;
        }

        private const string METHOD = "/taskInfo/getExtraParams";


        public override bool IsError
        {
            get
            {
                return base.IsError || !IsResultSuccess;
            }
        }

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

        public bool IsResultSuccess { get; private set; } = false;

        public string Message { get; private set; } = "";

        public List<GetExtraParams.Params> extraParams { get; private set; } = null;

        public IEnumerator Send(string taskId)
        {
            HttpQueryParam param = new HttpQueryParam();
            param.Add("taskId", taskId);
            yield return GetText(METHOD, param.ToString());
        }

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

