# 手机一键编译 APK

1. 在 GitHub 新建一个空的 Repository。
2. 上传整个项目目录的内容，确保 `.github/workflows/build-apk.yml` 也上传。
3. 打开仓库的 **Actions**。
4. 选择 **Build APK**。
5. 点击 **Run workflow**。
6. 编译完成后打开该次运行。
7. 在 **Artifacts** 下载 `SwitchStream-debug-apk`。
8. 解压后得到 `app-debug.apk`。

注意：这是当前 MVP 的 APK，当前只显示测试界面；真正的视频编码/传输/控制功能还需要继续开发。
