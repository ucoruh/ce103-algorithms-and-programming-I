#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   return 0;
}

//This file has two build and debug option LLVM and GCC in config files.
//for C++ VsCode you can check the following links
//for Windows
//https://code.visualstudio.com/docs/cpp/config-mingw 
//for Linux
//https://code.visualstudio.com/docs/cpp/config-linux
//for WSL
//https://code.visualstudio.com/docs/cpp/config-wsl


//lauhch.json file is required for debugging and running 
//tasks.json file is required for compiling

//in the launch file if you start debugging with F5 
//(you can select debugger with CTRL+SHIFT+P and then writing Debug and Selecting Configure Debugger Option) 
//following line will be your debugging application path 
//if you start debugging with F5 in Hello.c file this will set <Hello.c base path>/Hello.exe
//You should set this correct for both LLVM and GCC configuration in launch.json
// "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",

//Also you should set your installed debugger paths
//for GCC 
//"miDebuggerPath": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",
//for LLVM
//"miDebuggerPath": "C:\\Program Files\\LLVM\\bin\\lldb.exe",

//for Debugging (CTRL+SHIFT+D enter) 
//Open Hello.c and when you are in this file
//Press CTRL+SHIFT+P
//Write Debug -> Select and Start Debugging 
//Select lldb or gdb
//Not lldb has issue

//for Compile (CTRL+SHIFT+B enter)
//Open Hello.c and when you are in this file
//Press CTRL+SHIFT+P
//Write Tasks and select Run
//You can select clang or gcc

//If you compiled with gcc debug with gdb
//If you compiled with clang debug with lldb (not supported now for vs-code)
//Issue : https://github.com/microsoft/vscode-cpptools/issues/6617 


