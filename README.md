# SwitchStream MVP

局域网手机→Switch 串流项目骨架，面向合法的 Atmosphère/Homebrew 开发环境。
当前版本提供协议设计、Android 端占位工程和 Switch Homebrew 端占位工程。

## 当前协议
- TCP 9000：控制/配对
- UDP 9001：视频包
- UDP 9002：音频包
- 配对：6 位数字码
- 视频目标：H.264 720p/60
- 音频目标：Opus

> 这是开发骨架，不包含绕过系统安全、DRM 或盗版功能。
> Switch 端需要你自己的合法 Homebrew 开发工具链（devkitPro/devkitA64 等）。
