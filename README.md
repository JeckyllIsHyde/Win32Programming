# Win32Programming
Basic recipes for Windows programming

1. Compile simple console application with cl.exe
2. Compile simple console application with .sln and MSBuild
3. Compile simple console application with mingw
   1. Install MinGW-W64 using MSYS2 [here](https://www.msys2.org/)
   2. `pacman -S mingw-w64-ucrt-x86_64-gcc` for UCRT64 environment
   3. `gcc --version`
   4. update pacman `pacman -Suy`