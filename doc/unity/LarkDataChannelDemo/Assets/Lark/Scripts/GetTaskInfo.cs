using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace lark {
    // 获取任务信息API类
    // Get task information API class
    public class GetTaskInfo : ApiBase<GetTaskInfo.TaskInfo>
    {
        // API方法路径
        // API method path
        private const string METHOD = "/taskInfo/getTask";

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

        // 任务信息
        // Task information
        public TaskInfo taskInfo { get; private set; } = null;

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
        protected override void OnApiResponseSuccess(ApiResponse<TaskInfo> response)
        {
            base.OnApiResponseSuccess(response);
            //Debug.Log("============ applist serrch result:" + response.code + "; list:" + response.result.Count);
            if (IsCodeSuccess(response.code))
            {
                IsResultSuccess = true;
                Message = response.message;
                taskInfo = response.result;
            }
            else
            {
                IsResultSuccess = false;
                Message = response.message;
                taskInfo = null;
            }
        }

        // 请求失败回调
        // Request failure callback
        protected override void OnFailed(string error)
        {
            base.OnFailed(error);
            IsResultSuccess = false;
            Message = "";
            taskInfo = null;
        }

        // 任务信息数据结构
        // Task information data structure
        [System.Serializable]
        public class TaskInfo
        {
            // 任务ID
            // Task ID
            public string taskId;
            // 服务器ID
            // Server ID
            public string serverId;
            // 服务器IP
            // Server IP
            public string serverIp;
            // 公网IP
            // Public IP
            public string publicIp;
            // 客户端IP
            // Client IP
            public string clientIp;
            // 国家
            // Country
            public string country;
            // 省份
            // Province
            public string province;
            // 城市
            // City
            public string city;
            // 应用密钥
            // Application key
            public string appKey;
            // 应用ID
            // Application ID
            public string appliId;
            // 应用类型
            // Application type
            public int appliType;
            // 启动进程类型
            // Start process type
            public int startProcType;
            // 状态
            // Status
            public int status;
            // 启动参数
            // Start parameters
            public string startParam;
            // 启动时间
            // Start time
            public string startAt;
            // 最大FPS限制
            // Maximum FPS limit
            public int limitMaxFps;
            // 离屏渲染
            // Off-screen rendering
            public int offScreen;
            // 使用游戏手柄
            // Use gamepad
            public int useGamepad;
            // 玩家模式
            // Player mode
            public int playerMode;
            // 玩家列表开关
            // Player list toggle
            public int playerListToggle;
            // 管理员视图
            // Admin viewer
            public int adminViewer;
            // 创建日期
            // Create date
            public string createDate;
            // 更新日期
            // Update date
            public string updateDate;
            // 分享URL
            // Share URL
            public string shareUrl;
            // 数据通道
            // Data channel
            public int dcs;
            // 保留标志
            // Reserve flag
            public int reserveFlag;

            // 转换为字符串
            // Convert to string
            public override string ToString()
            {
                return JsonUtility.ToJson(this);
            }
        }
    }
}
