---
title: Install on Windows
---

### Install via winget cli
CCom gets distributed for Windows via the new Windows package manager called [winget](https://github.com/microsoft/winget-cli). <br>
In the future, winget will be available for download in the Microsoft Store. Currently, the easiest way to install winget is to download it manually from GitHub. Visit the [installation instructions](https://github.com/microsoft/winget-cli#installing-the-client) from Microsoft.

As soon as the Windows package manager is installed on your Windows machine, you can open up powershell and execute the following installation command: <br>
```sh
winget install ChilliBits.CCom
```
After installing CCom, you should be able to run Compose Generator. If not, please restart your powershell instance to make it reload the available commands.

### Install via installer
To install CCom on Windows, download the `ccom_<version>_<arch>_setup.exe` file [here](https://github.com/compose-generator/ccom/releases/latest) and run it. <br>
It is possible that you see an error notification by your anti-virus software complaining about CCom being a potentially dangerous application. This can happen if the latest version was released very recently and too few people downloaded it yet. If you want to validate the file signature, you can visit [this GitHub repo](https://github.com/microsoft/winget-pkgs/tree/master/manifests/c/ChilliBits/CCom), select your version and open the file `ChilliBits.CCom.installer.yaml`. There you can find the SHA256 signatures for the `x64` and `x86` exe installers.

### Use
```sh
ccom [options] <input>
```