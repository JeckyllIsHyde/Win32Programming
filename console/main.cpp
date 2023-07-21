/*

    Win32 For compiling
    1. press Windows-Key and launch "Native Tools Command Prompt"
        this could be for x86, x64, VS 2019, VS 2022
    2. go to directory where the file is located
    3. compile the code
        >>> cl.exe /W4 /EHsc main.cpp /link /out:hello_world.exe
    4. run the program
        >>> hello_world.exe

*/
#include <iostream>

int main()
{
    std::cout << "Hello Console Windows App" << std::endl;
    return 0;
}