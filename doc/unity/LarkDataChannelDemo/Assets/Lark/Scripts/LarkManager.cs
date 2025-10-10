using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace lark { 
    // Lark管理器类 - 数据通道的主要管理类
    // Lark Manager class - main management class for data channel
    public class LarkManager : MonoBehaviour
    {
        // 对象名称常量
        // Object name constant
        const string OBJ_NAME = "LarkManager";

        // 异步获取。
        // Asynchronous acquisition
        // 添加 DataChannelNativeApi onTaskStatus 代理
        // Note: Add DataChannelNativeApi onTaskStatus delegate
        public string TaskId { get; private set; } = "";

        // 单例实例
        // Singleton instance
        private static LarkManager larkManager = null;
        
        // 单例属性
        // Singleton property
        public static LarkManager Instance
        {
            get
            {
                if (larkManager == null)
                {
                    larkManager = FindObjectOfType<LarkManager>();
                }
                if (larkManager == null)
                {
                    var go = new GameObject(OBJ_NAME);
                    larkManager = go.AddComponent<LarkManager>();
                }
                return larkManager;
            }
        }

        // 数据通道API实例
        // Data channel API instance
        public DataChannelNativeApi DataChannel
        {
            get;
            private set;
        }

        // 初始化
        // Initialization
        private void Awake()
        {
            DataChannel = GetComponent<DataChannelNativeApi>();

            if (DataChannel == null)
            {
                DataChannel = gameObject.AddComponent<DataChannelNativeApi>();
            }

            try
            {
#if UNITY_EDITOR
                // 编辑器内使用测试 TaskID
                // Use test TaskID in editor
                TaskId = "123456";
#else
                DataChannel.RegisterTaskstatusCallback();
                DataChannel.onTaskStatus += OnTaskStatus;
#endif
            }
            catch (Exception e) {
                Debug.LogError("检测到taskID格式不正确，请在云雀后台设置使用附加参数 " + e.Message);
                Debug.LogError("Detected incorrect taskID format, please enable additional parameters in Lark backend " + e.Message);
            }
        }

        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        // 销毁时清理
        // Cleanup on destroy
        private void OnDestroy()
        {
            DataChannel.Stop();
        }

        /// <summary>
        /// 开始连接数据通道
        /// Start connecting data channel
        /// </summary>
        /// <returns>连接结果 Connection result</returns>
        public DataChannelNativeApi.ApiRestult StartConnect() {
            return DataChannel.StartConnect(TaskId);
        }

        /// <summary>
        /// 开启智能语流程
        /// 调用此函数一定要StartConnect成功，并且回调函数也返回成功后再调用
        /// Start AI voice process
        /// This function must be called after StartConnect succeeds and callback returns success
        /// </summary>
        /// <returns></returns>
        public DataChannelNativeApi.ApiRestult StartAiVoice()
        {
            return (DataChannelNativeApi.ApiRestult)DataChannel.RegisterAivoiceCallback();
        }

        /// <summary>
        /// 主动关闭数据通道
        /// Actively close data channel
        /// </summary>
        public void Stop()
        {
            DataChannel.Stop();
        }

        /// <summary>
        /// 发送文本消息
        /// Send text message
        /// </summary>
        /// <param name="txt">文本消息 Text message</param>
        public DataChannelNativeApi.ApiRestult Send(string txt)
        {
            return DataChannel.Send(txt);
        }
        
        /// <summary>
        /// 发送字节消息
        /// Send byte message
        /// </summary>
        /// <param name="binary">字节消息 Byte message</param>
        public DataChannelNativeApi.ApiRestult Send(byte[] binary) {
            return DataChannel.Send(binary);
        }

        #region callback
        // 任务状态回调
        // Task status callback
        public void OnTaskStatus(bool status, string taskId)
        {
            Debug.Log("on task status change. " + status + " " + taskId);
            TaskId = taskId;
        }
        #endregion
    }
}
