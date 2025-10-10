using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// JSON命令类 - 定义Unity和Web客户端之间的通信协议
// JSON Command class - defines communication protocol between Unity and Web client
[System.Serializable]
public class JsonCmd
{
    // 命令类型枚举
    // Command type enumeration
    public enum CmdType
    {
        // 通知网页载入摄像机个数
        // Notify web client about loaded camera count
        CMD_CAMERA_LOADED = 1000,
        // 网页控制切换使用某个摄像机
        // Web client controls switching to a specific camera
        CMD_SWITCH_CAMERA = 1001,

        // 通知网页载入的物体
        // Notify web client about loaded objects
        CMD_OBJECT_LOADED = 2001,
        // 物体被选择
        // Object is selected
        CMD_OBJECT_PICKED = 2002,
        // 切换某个物体的显示状态
        // Toggle visibility of a specific object
        CMD_TOGGLE_OBJECT = 2003,

        // 窗口大小调整
        // Window resize
        CMD_WINDOW_RESIZE = 3001,
    }

    // 解析JSON命令
    // Parse JSON command
    public static JsonCmd ParseJsonCmd(string res)
    {
        return JsonUtility.FromJson<JsonCmd>(res);
    }

    // 命令类型
    // Command type
    public CmdType type;
    // 数据字段
    // Data field
    public int data;
    // 客户端宽度
    // Client width
    public int clientWidth = 0;
    // 客户端高度
    // Client height
    public int clientHeight = 0;

    // 构造函数
    // Constructor
    public JsonCmd(CmdType type, int data = 0)
    {
        this.type = type;
        this.data = data;
    }

    // 转换为JSON字符串
    // Convert to JSON string
    public string ToJson()
    {
        return JsonUtility.ToJson(this);
    }
}
