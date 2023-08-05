# Win32Programming
Basic recipes for Windows programming

1. Compile simple console application with cl.exe
2. Compile simple console application with .sln and MSBuild
3. Compile simple console application with mingw
   1. Install MinGW-W64 using MSYS2 [here](https://www.msys2.org/)
   2. `pacman -S mingw-w64-ucrt-x86_64-gcc` for UCRT64 environment
   3. `gcc --version`
   4. update pacman `pacman -Suy`
4. Compile MFC Application 
   1. Create project from Visual Studio Application Wizard for C++
      1. New Project -> MFC Application
      2. Multiple document, MFC standard, File extension: Ring
      3. Generated classes: CXXXXView, CScrollView
      4. Compile `msbuild MFCApp.sln -t:Rebuild -p:Configuration=Release,Platform=x86`