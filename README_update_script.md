# 文档文件自动更新脚本

## 概述

`update_doc_files.py` 是一个用于自动从根目录更新 doc 目录中 Unity 和 Unreal 工程关键文件的 Python 脚本。当 SDK 核心文件（二进制库、头文件）更新后，使用此脚本可以快速同步到所有演示工程中。

## 功能特性

- ✅ 自动检测文件版本（基于修改时间）
- ✅ 支持 Unity 和 Unreal 工程的多版本管理
- ✅ 模拟运行模式（dry-run）预览更新操作
- ✅ 选择性更新（可单独跳过 Unity 或 Unreal 工程）
- ✅ 详细的日志输出和错误处理

## 支持更新的文件类型

| 文件类型 | 源位置 | Unity 目标位置 | Unreal 目标位置 |
|---------|--------|---------------|----------------|
| Windows DLL | `bin/win64/LarkXRDataChannel64.dll` | `Assets/Lark/Plugins/x64/` | `Plugins/LarkXRCloudApp/Binaries/ThirdParty/...` |
| Linux SO | `bin/linux64/libLarkXRDataChannel64.so` | `Assets/Lark/Plugins/x64/` | `Plugins/LarkXRCloudApp/Binaries/ThirdParty/...` |
| Windows LIB | `lib/win64/LarkXRDataChannel64.lib` | - | `Plugins/LarkXRCloudApp/Source/ThirdParty/...` |
| 数据通道头文件 | `include/LarkXRDataChannel.h` | `Assets/Lark/Plugins/` | `Plugins/LarkXRCloudApp/Source/LarkXRCloudApp/Public/` |
| 智能语音头文件 | `include/LarkXRAiVoice.h` | `Assets/Lark/Plugins/` | `Plugins/LarkXRCloudApp/Source/LarkXRCloudApp/Public/` |

## 使用方法

### 基本使用
```bash
# 更新所有工程文件
python update_doc_files.py

# 模拟运行（预览将要更新的文件）
python update_doc_files.py --dry-run

# 详细输出模式
python update_doc_files.py --verbose
```

### 选择性更新
```bash
# 只更新 Unity 工程
python update_doc_files.py --skip-unreal

# 只更新 Unreal 工程
python update_doc_files.py --skip-unity

# 指定项目根目录
python update_doc_files.py --root-dir /path/to/project
```

### 组合使用示例
```bash
# 预览 Unity 工程的更新
python update_doc_files.py --dry-run --skip-unreal --verbose

# 实际更新 Unreal 工程
python update_doc_files.py --skip-unity
```

## 支持的工程版本

### Unity 工程
- LarkDataChannelDemo
- LarkDataChannelDemo_2
- LarkDataChannelDemo_3
- LarkDataChannelDemo_4
- 其他包含 "LarkDataChannelDemo" 的目录

### Unreal 工程
- app_plugin_426 (UE4.26)
- app_plugin_427 (UE4.27)
- app_plugin_501 (UE5.01)
- app_plugin_510 (UE5.10)
- app_plugin_520 (UE5.20)
- app_plugin_530 (UE5.30)
- app_plugin_540 (UE5.40)
- app_plugin_550 (UE5.50)
- app_plugin_560 (UE5.60)
- 其他以 "app_plugin_" 开头的目录

## 脚本工作流程

1. **扫描工程目录**：自动识别 doc/unity 和 doc/unreal 目录下的所有工程
2. **检查文件版本**：比较源文件和目标文件的修改时间
3. **选择性更新**：只更新版本较旧的文件
4. **备份安全**：使用 copy2 保留文件元数据

## 环境要求

- Python 3.6+
- 标准库（无需额外安装依赖）
- Windows/Linux/macOS 兼容

## 注意事项

1. **权限要求**：确保脚本有写入目标目录的权限
2. **备份建议**：首次使用前建议备份重要工程文件
3. **版本控制**：脚本会跳过已是最新版本的文件，避免不必要的覆盖
4. **构建输出**：脚本也会更新构建输出目录中的文件（如 Saved/StagedBuilds）

## 错误处理

脚本包含完整的错误处理机制：
- 文件不存在时会跳过并记录警告
- 权限错误会明确提示
- 目录创建失败会记录详细错误信息

## 集成到开发流程

建议在以下情况下运行此脚本：
- SDK 发布新版本后
- 核心库文件更新后
- 准备演示工程打包前
- 跨平台构建前确保文件一致性

## 扩展性

脚本采用模块化设计，易于扩展：
- 添加新文件类型：修改 `file_mappings` 字典
- 支持新工程类型：添加相应的更新方法
- 自定义匹配规则：修改文件查找逻辑
