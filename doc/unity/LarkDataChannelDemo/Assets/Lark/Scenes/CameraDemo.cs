using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// 相机演示类 - 展示数据通道和相机控制功能
// Camera Demo class - demonstrates data channel and camera control functionality
public class CameraDemo : MonoBehaviour
{
    // UI组件
    // UI components
    public Text statusText;
    public Text taskIdText;
    public InputField sendInput;
    public Text receiveText;

    // 渲染器列表
    // Renderer list
    public List<Renderer> renderers;

    // 图片缓冲区
    // Picture buffer
    private List<byte> picBuffer = new List<byte>();

    // 相机控制灵敏度
    // Camera control sensitivity
    public float sensitivityMouse = 2f;
    public float sensitivetyKeyBoard = 0.05f;
    public float sensitivetyMouseWheel = 10f;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Assert(taskIdText != null);
        Debug.Assert(statusText != null);
        Debug.Assert(sendInput != null);
        Debug.Assert(receiveText != null);

        // 请在云雀后台上传应用时设置《接口调用是否附加参数》为<<是>>
        // Please set "Interface Call with Additional Parameters" to <<Yes>> when uploading the application in Lark backend
        // 附加参数 taskId 将以传递给命令行最后一位
        // Additional parameter taskId will be passed as the last command line argument
        // 如果 taskId 未设置或不正确将无法连接数据通道
        // If taskId is not set or incorrect, data channel connection will fail
        taskIdText.text += lark.LarkManager.Instance.TaskId;

        lark.LarkManager larkManager = lark.LarkManager.Instance;
        larkManager.DataChannel.onConnected += OnConnected;
        larkManager.DataChannel.onText += OnTextMessage;
        larkManager.DataChannel.onBinary += OnBinaryMessaeg;
        larkManager.DataChannel.onClose += OnClose;
        // start connect
        lark.DataChannelNativeApi.ApiRestult restult = lark.LarkManager.Instance.StartConnect();

        if (restult != lark.DataChannelNativeApi.ApiRestult.XR_SUCCESS)
        {
            statusText.text = "Start Failed. Result " + restult.ToString();
        }
    }

    // Update is called once per frame
    void Update()
    {
        UpdateCamera();
    }
    
    // 更新相机控制
    // Update camera control
    private void UpdateCamera()
    {
        // 滚轮实现镜头缩进和拉远
        // Mouse wheel for zoom in and zoom out
        if (Input.GetAxis("Mouse ScrollWheel") != 0)
        {
            Camera.main.fieldOfView = Camera.main.fieldOfView - Input.GetAxis("Mouse ScrollWheel") * sensitivetyMouseWheel;
        }
        // 按着鼠标右键实现视角转动
        // Hold right mouse button to rotate view
        if (Input.GetMouseButton(1))
        {
            Camera.main.transform.Rotate(0, Input.GetAxis("Mouse X") * sensitivityMouse, 0);
        }
        // 键盘按钮←/a和→/d实现视角水平移动，键盘按钮↑/w和↓/s实现视角水平旋转
        // Keyboard arrows/A/D for horizontal movement, W/S for vertical movement
        if (Input.GetAxis("Horizontal") != 0)
        {
            Camera.main.transform.Translate(Input.GetAxis("Horizontal") * sensitivetyKeyBoard, 0, 0);
        }
        if (Input.GetAxis("Vertical") != 0)
        {
            Camera.main.transform.Translate(0, 0, Input.GetAxis("Vertical") * sensitivetyKeyBoard);
        }
    }
    
    #region wrap channel 
    // 发送文本消息
    // Send text message
    public void SendText(string txt)
    {
        lark.LarkManager.Instance.Send(txt);
    }

    // 发送二进制消息
    // Send binary message
    public void SendBinary(byte[] data)
    {
        lark.LarkManager.Instance.Send(data);
    }
    #endregion

    #region callbacks
    // 连接成功回调
    // Connection successful callback
    public void OnConnected()
    {
        statusText.text = "连接成功";
        statusText.text = "Connection Successful";
    }
    
    // 文本消息回调
    // Text message callback
    public void OnTextMessage(string msg)
    {
        Debug.Log("OnTextMessage " + msg);
        // parse failed. receive pure text.
        receiveText.text = msg;
    }
    
    // 二进制消息回调
    // Binary message callback
    public void OnBinaryMessaeg(byte[] binary)
    {
        // Debug.Log("OnBinaryMessaeg " + BitConverter.ToString(binary));
        if (binary.Length < 1)
        {
            return;
        }
        int code = binary[0];

       if (code == 0x1 && picBuffer.Count != 0) {
            picBuffer.Clear();
        }

        for (int i = 1; i < binary.Length; i++)
        {
            picBuffer.Add(binary[i]);
        }

        switch (code)
        {
            // start
            case 0x1:
                receiveText.text = "pic start buffer";
                break;
            // data
            case 0x2:
                receiveText.text = "pic data buffer";
                break;
            // end
            case 0x3:
                receiveText.text = "pic end buffer + length " + picBuffer.Count;
                try
                {
                    Texture2D texture2D = new Texture2D(300, 200, TextureFormat.RGBA32, false);
                    texture2D.LoadRawTextureData(picBuffer.ToArray());
                    texture2D.Apply();
                    // image.texture = texture2D;
                    foreach (Renderer renderer in renderers) {
                        renderer.material.mainTexture = texture2D;
                    }
                }
                catch (Exception e)
                {
                    receiveText.text = "Load texture failed " + e.Message;
                }
                break;
        }
    }
    
    // 连接关闭回调
    // Connection closed callback
    public void OnClose(lark.DataChannelNativeApi.ErrorCode code)
    {
        statusText.text = "通道已关闭 code " + code;
        statusText.text = "Channel closed. Code: " + code;
    }
    #endregion
}
