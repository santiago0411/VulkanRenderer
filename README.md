# Vulkan Renderer

Clone using: 
<br>
`git clone --recurse-submodules https://github.com/santiago0411/VUlkanRenderer.git`

## Building on Windows

To build on windows [Visual Studio](https://visualstudio.microsoft.com/) is required.

Head to the scripts folder and run the **GenerateProjectsWin.bat** script. This will generate a Visual Studio solution file at the root directory as well as project files inside of each project's folder.

Once generated simply open the solution and build from within Visual Studio.

> Note that premake will generate solution files for Visual Studio 2022. As older versions may not provide full support to build C++20.