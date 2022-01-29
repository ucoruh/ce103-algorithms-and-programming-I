---
marp: true
theme: default
_class: lead
paginate: true
backgroundColor: #fff
backgroundImage: url('https://marp.app/assets/hero-background.svg')
header: 'CE103 Algorithms and Programming I'
footer: '![height:50px](http://erdogan.edu.tr/Images/Uploads/MyContents/L_379-20170718142719217230.jpg) RTEU CE103 Week-2'
title: "CE103 Algorithms and Programming I"
author: "Author: Asst. Prof. Dr. Uğur CORUH"
date:
subtitle: "Development Environments and Algorithm Basics"
geometry: "left=2.54cm,right=2.54cm,top=1.91cm,bottom=1.91cm"
titlepage: true
titlepage-color: "FFFFFF"
titlepage-text-color: "000000"
titlepage-rule-color: "CCCCCC"
titlepage-rule-height: 4
logo: "assets/2021-10-19-15-01-36-image.png"
logo-width: 100 
page-background:
page-background-opacity:
links-as-notes: true
lot: true
lof: true
listings-disable-line-numbers: true
listings-no-page-break: false
disable-header-and-footer: false
header-left:
header-center:
header-right:
footer-left: "© Dr. Uğur CORUH"
footer-center: "License: WTFPL"
footer-right:
subparagraph: true
lang: en-US 
---


<!-- _backgroundColor: aquq -->

<!-- _color: orange -->

<!-- paginate: false -->

## CE103 Algorithms and Programming I

## Week-2

#### Fall Semester, 2021-2022

Download [DOC](ce103-week-2-setup.md_doc.pdf), [SLIDE](ce103-week-2-setup.md_slide.pdf), [PPTX](ce103-week-2-setup.md_slide.pptx)

<iframe width=700, height=500 frameBorder=0 src="../ce103-week-2-setup.md_slide.html"></iframe>

---

<!-- paginate: true -->

## Algorithm Basics

---

## Flowgorithm

http://www.flowgorithm.org/

---

## Pseudocode

[Pseudocode - Wikipedia](https://en.wikipedia.org/wiki/Pseudocode)

[Pseudocode Examples](https://www.unf.edu/~broggio/cop2221/2221pseu.htm)

[How to write a Pseudo Code? - GeeksforGeeks](https://www.geeksforgeeks.org/how-to-write-a-pseudo-code/)

---

## Introduction to Analysis of Algorithms

---

## Programming Environment Setup and Configuration

---

## C / C++ Environment and Development

---

### DevCpp (Install / Compile / Run / Debug)

Download DevC++ IDE from following link

https://www.bloodshed.net/

Open DevC++ IDE for C Project Generation

*Open File->New->Project*

![](assets/2021-10-22-02-34-21-image.png)

---

Select **Console Application** from **Basic** tab and with **C Project** Option and write a project name such as "**Hello**" then press OK

Select a folder and save **Hello.dev** project file. 

You will see a sample main with empty body

![](assets/2021-10-22-02-38-47-image.png)

---

```c
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, s,ystem("pause") or input loop */
int main(int argc, char *argv[]) {
    retAdd 0;
}
```

---

add the following line in main function. This will write "Hello, World!" on the screen and then wait a keypress to exit from application

```c
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    printf("Hello, World!");
    getchar();
    return 0;
}
```

---

Then save the file

![](assets/2021-10-22-02-41-04-image.png)

---

Use from menu *Execute->Compile F5* to generate Hello.exe 

![](assets/2021-10-22-02-43-04-image.png)

---

You can find the generated Hello.exe path from Compile.log as follow. Check the Output Filename

```batch
Compiling project changes...
--------
- Project Filename: E:\UgurCoruh\RTEU\Lectures\2021-2022 Güz CE103 - Algorithms and Programming I\Lectures\ce103-algorithms-and-programming-I\Week-2\devcpp-hello-world-apps\Hello.dev
- Compiler Name: TDM-GCC 4.9.2 64-bit Release

Building makefile...
--------
- Filename: E:\UgurCoruh\RTEU\Lectures\2021-2022 Güz CE103 - Algorithms and Programming I\Lectures\ce103-algorithms-and-programming-I\Week-2\devcpp-hello-world-apps\Makefile.win

Processing makefile...
--------
- Makefile Processor: C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\mingw32-make.exe
- Command: mingw32-make.exe -f "E:\UgurCoruh\RTEU\Lectures\2021-2022 Güz CE103 - Algorithms and Programming I\Lectures\ce103-algorithms-and-programming-I\Week-2\devcpp-hello-world-apps\Makefile.win" all

gcc.exe -c main.c -o main.o -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" 

gcc.exe main.o -o Hello.exe -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib" -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc


Compilation results...
--------
- Errors: 0
- Warnings: 0
- Output Filename: E:\UgurCoruh\RTEU\Lectures\2021-2022 Güz CE103 - Algorithms and Programming I\Lectures\ce103-algorithms-and-programming-I\Week-2\devcpp-hello-world-apps\Hello.exe
- Output Size: 128,103515625 KiB
- Compilation Time: 2,13s
```

---

Then you can run with Execute->Run F10 or Directly Compile&Run F11

![](assets/2021-10-22-02-44-37-image.png)

---

for debugging operations, just change the code and add more statements as follow

```c
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your getch, system(",pause") or input loop */

int main(int argc, char *argv[]) {

    printf("Hello, World! Step-1\n");
    printf("Hello, World! Step-2\n");
    printf("Hello, World! Step-3\n");
    printf("Hello, World! Step-4\n");
    printf("Hello, World! Step-5\n");
    printf("Hello, World! Step-6\n");

    getchar();

    return 0;
}
```

---

Click on line numbers and add breakpoints for debugger. This red point will be debugger stop points

![](assets/2021-10-22-02-52-41-image.png)

---

In the ,menu section select compiler with debug option

![](assets/2021-10-22-02-53-40-image.png)

---

Compile application with debug setting and in Execute Section use Debug F5 to start debugging

![](assets/2021-10-22-02-55-21-image.png)

---

Debugger will stop at breakpoint at the debug point (blue line)

![](assets/2021-10-22-02-56-25-image.png)

---

Moving to next statement can be done via control buttons or shortcuts

![](assets/2021-10-22-02-57-14-image.png)

---

Press F8 to step-by-step continue

> Then go to Project Options - Compiler - Linker and set Generate debugging information to "yes", and make sure you are not using any optimization options (they're not good for debug mode). Also check the Parameters tab, make sure you don't have any optimization options (like -O2 or -O3, but -O0 is ok because it means no optimization) or strip option (-s).  
> After that, do a full rebuild (Ctrl-F11), then set breakpoint(s) where you want the debugger to stop (otherwise it will just run the program). To set a breakpoint on a line, just click on the gutter (the gray band on the left), or press Ctrl-F5.
> 
> Now you are ready to launch the debugger, by pressing F8 or clicking the debug button. If everything goes well, the program will start, and then stop at the first breakpoint. Then you can step through the code, entering function calls, by pressing Shift-F7 or the "step into" button, or stepping over the function calls, by pressing F7 or the "next step" button. You can press Ctrl-F7 or the "continue" button to continue execution till the next breakpoint. At any time, you can add or remove breakpoints.
> 
> When the program stopped at a breakpoint and you are stepping through the code, you can display the values of various variables in your program by putting your mouse over them, or you can display variables and expressions by pressing F4 or the "add watch" button and typing the expression.

[How do I debug using Dev-C++](http://eilat.sci.brooklyn.cuny.edu/cis1_5/HowToDebug.htm)

---

### Code Blocks (Install / Compile / Run / Debug)

Download Code Blocks from the following link

[Binary releases - Code::Blocks](https://www.codeblocks.org/downloads/binaries/)

Open Code Blocks and 

Select File->New->Project

![](assets/2021-10-22-03-33-42-image.png)

---

Select Console Application

Click Next from Opening Window

![](assets/2021-10-22-03-34-32-image.png)

---

Select C for Sample Project 

![](assets/2021-10-22-03-34-44-image.png)

---

Write a project name and title also set a project folder

![](assets/2021-10-22-03-35-41-image.png)

---

Select complier for this project we selected GCC but you can select C compliers from list. Set Debug and Release executable output folders.

![](assets/2021-10-22-03-36-10-image.png)

---

After this wizard you will have the following code

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
```

---

Select Debug Build from menu

![](assets/2021-10-22-03-38-33-image.png)

---

Run with Build and Run F9

![](assets/2021-10-22-03-36-51-image.png)

---

You should see the following output

![](assets/2021-10-22-03-37-14-image.png)

---

Add the following lines to your source code for debugging

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world! Step-1\n");
    printf("Hello world! Step-2\n");
    printf("Hello world! Step-3\n");
    printf("Hello world! Step-4\n");
    printf("Hello world! Step-5\n");
    printf("Hello world! Step-6\n");
    return 0;
}
```

---

and add break points with F5 or mouse click

![](assets/2021-10-22-03-44-38-image.png)

---

select Debug->Start/Continue to start debugger

![](assets/2021-10-22-03-45-21-image.png)

---

If you see the following error this is related with long or turkish character including path. Just move project to a shorter path and try again

```batch
Setting breakpoints
Debugger name and version: GNU gdb (GDB) 8.1
Starting the debuggee failed: No executable specified, use `target exec'.
Debugger finished with status 0
```

---

You will see the following yellow pointer for debugger

![](assets/2021-10-22-03-44-38-image.png)

---

You can use the following menu or shortcuts for step-by-step debugging.

![](assets/2021-10-22-03-45-08-image.png)

---

### GCC/G++ Complier (MinGW) / Clang-cl (LLVM)

Download and install MinGW or LLVM compiler (if you downloded then skip this step)

MinGW installer (clang)

[Download MinGW-w64 - for 32 and 64 bit Windows from SourceForge.net](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)

LLVM installer (gcc / g++)

[Download LLVM releases](https://releases.llvm.org/)

Also use the following notes

https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf

---

Open a console with "cmd" and test the following commands if commands are not recognized then set the system environment variable add gcc and g++ exe paths to path variable (add to both system and user path variable)

```batch
gcc --version

g++ --version
```

```batch
C:\Users\ugur.coruh>gcc --version
gcc (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```batch
clang --version
```

---

for gcc.exe, g++.exe and gdb.exe

```bash
C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin
```

for clang.exe , lldb.exe

```batch
C:\Program Files\LLVM\bin
```

This folder paths changes according to your setup

---

### VSCode (Install / Compile / Run / Debug)

Download Visual Studio Code from the following link

[Download Visual Studio Code - Mac, Linux, Windows](https://code.visualstudio.com/download)

In this sample you will find MinGW and LLVM compiler combinations for C and C++

Create a folder and enter this folder then open this folder with vscode by right click

![](assets/2021-10-22-04-28-24-image.png)

---

or enter the folder via console 

![](assets/2021-10-22-04-29-02-image.png)

write 

```batch
code .
```

---

This will open vscode for current folder . dot present current folder. 

You will see a empty folder in the right window

![](assets/2021-10-22-04-31-28-image.png)

---

![](assets/2021-10-22-04-31-46-image.png)

---

Create a hello.c file and write following content

```c
#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   return 0;
}
```

---

use CTRL+SHIFT+B (you should be on source code section) to build file

![](assets/2021-10-22-04-34-04-image.png)

---

Select GCC or CLANG for this sample we can use GCC

You will see output generated Hello.exe

![](assets/2021-10-22-04-34-55-image.png)

---

for debugging just put breakpoint and build again

![](assets/2021-10-22-04-35-31-image.png)

---

after build for debug press CTRL+SHIFT+D (you should be on source code section)and in the  right window select create launch.json

![](assets/2021-10-22-04-36-47-image.png)

---

from opening window select C++ GDB/LLDB

![](assets/2021-10-22-04-37-09-image.png)

---

from next opening menu select mingw-w64 gcc.exe

![](assets/2021-10-22-04-37-39-image.png)

---

this will run debugger and you will see debug points activated

![](assets/2021-10-22-04-38-34-image.png)

---

then you can step-by-step debug your code.

the following task.json and launch.json automatically generated with your selections

![](assets/2021-10-22-04-39-30-image.png)

---

launch.json

```json
{
    // Olası öznitelikler hakkında bilgi edinmek için IntelliSense kullanın.
    // Mevcut özniteliklerin açıklamalarını görüntülemek için üzerine gelin.
    // Daha fazla bilgi için şu adresi ziyaret edin: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "gcc.exe - Etkin dosyayı derle ve dosyada hata ayıkla",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "gdb için düzgün yazdırmayı etkinleştir",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: gcc.exe etkin dosyayı derle"
        }
    ]
}
```

---

task.json

```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe etkin dosyayı derle",
            "command": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gcc.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Hata Ayıklayıcısı tarafından oluşturulan görev."
        }
    ],
    "version": "2.0.0"
}
```

---

you can do the same thing for other compilers and c++ source codes. LLVM do not support debug on vscode now.

for C++ VsCode you can check the following links

for Windows

https://code.visualstudio.com/docs/cpp/config-mingw

for Linux

https://code.visualstudio.com/docs/cpp/config-linux

for WSL

https://code.visualstudio.com/docs/cpp/config-wsl

---

```
in the launch file if you start debugging with F5

(you can select debugger with CTRL+SHIFT+P and then writing Debug and Selecting Configure Debugger Option)

following line will be your debugging application path

if you start debugging with F5 in Hello.c file this will set <Hello.c base path>/Hello.exe

You should set this correct for both LLVM and GCC configuration in launch.json

 "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",

Also you should set your installed debugger paths

for GCC

"miDebuggerPath": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",

for LLVM

"miDebuggerPath": "C:\\Program Files\\LLVM\\bin\\lldb.exe",
```

for more details please check the sample source codes.

---

### Visual Studio Community Edition (Install / Compile / Run / Debug)

---

### Notepad++ (Install / Compile )

Please download Notepad++ from the following link

[Downloads | Notepad&#43;&#43;](https://notepad-plus-plus.org/downloads/)

Download and install MinGW or LLVM compiler (if you downloded  then skip this step)

MinGW installer (clang)

[Download MinGW-w64 - for 32 and 64 bit Windows from SourceForge.net](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)

LLVM installer (gcc / g++)

[Download LLVM releases](https://releases.llvm.org/)

Also use the following notes 

https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf

---

Open a console with "cmd" and test the following commands if commands are not recognized then set the system environment variable add gcc and g++ exe paths to path variable (add to both system and user path variable)

```batch
gcc --version

g++ --version
```

```batch
C:\Users\ugur.coruh>gcc --version
gcc (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

---

![](assets/2021-10-22-03-18-30-image.png)

---

![](assets/2021-10-22-03-18-54-image.png)

---

![](assets/2021-10-22-03-21-11-image.png)

---

![](assets/2021-10-22-03-19-07-image.png)

---

![](assets/2021-10-22-03-19-25-image.png)

---

![](assets/2021-10-22-03-21-25-image.png)

---

for gcc.exe, g++.exe and gdb.exe 

```bash
C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin
```

---

for clang.exe , lldb.exe

```batch
C:\Program Files\LLVM\bin
```

---

This folder paths changes according to your setup

Open NppExec extension (install from extension manager if not exist)

![](assets/2021-10-22-04-22-24-image.png)

---

write the following commands in box

```batch
NPP_SAVE // save current file
cd $(CURRENT_DIRECTORY) // go to directory of the current file
gcc  -Wall -Wextra -Wpedantic -std=c++11 -o "$(NAME_PART)" "$(FILE_NAME)"
```

![](assets/2021-10-22-04-23-24-image.png)

---

save script as gcc-build and for more information check the following link

[How To Setup Notepad for Writing C++ Programs](http://www.edparrish.net/common/npp4c.html)

You can modify or add multiple scripts for another tasks.

---

### Vi/Vim

---

### Eclipse

---

### Netbeans

---

### Turbo C++ / C

---

### Cmake

**CMake** (http://www.cmake.org/) is a program which generates the **Makefiles** used by **Make**.

Why use **CMake** ?

- Eases **Make** use
  - but the same way of thinking
  - generate the **Makefile**
- Separate the compilation from the sources
- Multi-platfoms
- Very flexible
- Check if the libraries/programs are available on your system
- File generator (**configure_file**)
- Calling programs or scripts (**doxygen**)
- One of the new standards

---

#### Download and Install Cmake

[Download | CMake](https://cmake.org/download/)

---

### WSL and Linux Environment

[Hello world with CMake](https://lappweb.in2p3.fr/~paubert/ASTERICS_HPC/2-2-100.html)

---

#### Windows Environment

**main.c**

```c
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
```

**CMakeLists.txt**

```cmake
cmake_minimum_required(VERSION 3.7.2)
project(scanf-sample)
add_executable(scanf-sample main.c)
```

---

put main.c and CMakeLists.txt file in sample-scanf folder and from command line

![](assets/2021-11-07-00-42-52-image.png)

run the following cmake command with dot (.) to create solution file for c project

```batch
C:\Users\ugur.coruh\Desktop\sample-scanf>cmake .
```

---

I have Visual Studio 2022 Community Edition Installed on My Computer, for these reason build tools are selected for visual studio environment and the following outputs are generated

```batch
C:\Users\ugur.coruh\Desktop\sample-scanf>cmake .
-- Building for: Visual Studio 17 2022
-- Selecting Windows SDK version 10.0.22000.0 to target Windows 10.0.19043.
-- The C compiler identification is MSVC 19.30.30704.0
-- The CXX compiler identification is MSVC 19.30.30704.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.30.30704/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.30.30704/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/ugur.coruh/Desktop/sample-scanf

C:\Users\ugur.coruh\Desktop\sample-scanf>
```

---

also following files are generated

![](assets/2021-11-07-00-46-07-image.png)

---

if we open scanf-sample.sln file we will have automated generated project files

![](assets/2021-11-07-00-47-04-image.png)

---

you can make scanf-sample with startup project with right click and then run on visual studio.

if you want to configure for another build tool you can use Cmake-GUI installed with setup on your computer

![](assets/2021-11-07-00-56-13-image.png)

Open GUI and Select  *File-> Delete Cache* 

![](assets/2021-11-07-00-57-41-image.png)

---

then you can click "Configure" to select build tool

![](assets/2021-11-07-00-59-28-image.png)

---

![](assets/2021-11-07-00-59-39-image.png)

---

if you click "Configure" twice it will generate the visual studio solution in build folder

for more detailed examples that include also docker and travis-ci sample you can check the following repo

[GitHub - ttroy50/cmake-examples: Useful CMake Examples](https://github.com/ttroy50/cmake-examples)

---

### Make

Sample

**hello.c**

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

---

**Makefile**

```makefile
# This is the default target, which will be built when 
# you invoke make
.PHONY: all
all: hello

# This rule tells make how to build hello from hello.cpp
hello: hello.c
    g++ -o hello hello.c

# This rule tells make to copy hello to the binaries subdirectory,
# creating it if necessary
.PHONY: install
install:
    mkdir -p binaries
    cp -p hello binaries

# This rule tells make to delete hello and hello.o
.PHONY: clean 
clean:
    rm -f hello
```

---

**compile.bat**

```batch
make all .
```

will create hello.exe

check hello-make sample

---

![](assets/2021-11-07-01-45-59-image.png)

---

# JAVA Environment and Development

---

### JDK and JRE Setup

---

### System Environments and Paths

---

### Netbeans

---

### Eclipse

---

### Intellij Idea (Jet Brains)

---

### VSCode

---

### Notepad++

---

### Cmake

[Outline](https://lappweb.in2p3.fr/~paubert/ASTERICS_HPC/outline.html)

---

# C# Environment and Development

---

### Visual Studio Community Edition

---

### Notepad++

---

### Cmake

[Outline](https://lappweb.in2p3.fr/~paubert/ASTERICS_HPC/outline.html)

---

# Common Tools and Platforms

---

## Fatih Kalem

<img src="https://www.pekiyi.com/media/k2/items/cache/eea4518f1429f185be7035ff9652eb50_L.jpg" title="" alt="Fatih Kalem Nedir ve Özellikleri" width="127">

  https://cdnvideo.eba.gov.tr/fatihkalem/fatihkalem_portable.zip

  https://cdnvideo.eba.gov.tr/fatihkalem/fatihkalem_setup.exe

  ![Fatih Kalem indir - Akıllı Tahta için](https://i.ytimg.com/vi/_FCjuWwOUDw/maxresdefault.jpg)

---

## Notepad++ (Notepad for Source Code)

<img title="" src="https://upload.wikimedia.org/wikipedia/commons/thumb/6/69/Notepad%2B%2B_Logo.svg/2367px-Notepad%2B%2B_Logo.svg.png" alt="File:Notepad++ Logo.svg - Wikimedia Commons" width="70">

  [Downloads | Notepad&#43;&#43;](https://notepad-plus-plus.org/downloads/)

  ![Notepad++ - İndir](https://images.sftcdn.net/images/t_app-cover-l,f_auto/p/311d9b92-96d2-11e6-b5e8-00163ed833e7/1519528105/notepad-plus-notepad4ever.gif)

---

## HxD (Hex Editor)

<img src="https://community.chocolatey.org/content/packageimages/HxD.2.4.0.0.png" title="" alt="Chocolatey Software | HxD - Hex Editor and Disk Editor (Install) 2.4.0.0" width="50">

  [HxD - Freeware Hex Editor and Disk Editor | mh-nexus](https://mh-nexus.de/en/hxd/)

  ![](https://mh-nexus.de/en/graphics/HxDShotLarge.png)

---

## Marktext (Markdown Syntax Editor)

<img src="https://avatars.githubusercontent.com/u/36623013?s=200&v=4" title="" alt="Mark Text · GitHub" width="50">

  https://marktext.app/

  ![Mark Text Markdown Editor 0.15.0 Adds GUI Settings, New Find In Files  Backend - Linux Uprising Blog](https://1.bp.blogspot.com/-EWA3EEpk9z4/XUwHaVs4ASI/AAAAAAAADHY/5yAgzEwdqNsmTNRh_i03wkqSvIgifCZDwCLcBGAs/s1600/marktext-0150.png)

---

## Cygwin (Linux environment for Windows)

<img src="data:image/png;base64,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" title="" alt="Cygwin - Wikipedia" width="50">

  https://www.cygwin.com/

  ![Cygwin - Turkcewiki.org](http://upload.turkcewiki.org/wikipedia/commons/1/1e/Cygwin_X11_rootless_WinXP.png)

---

## Dependency Walker (32-bit or 64-bit Windows module dependency checker)

<img title="" src="https://secureanycloud.com/wp-content/uploads/sites/33/2016/06/dependencywalker1.png" alt="Dependency Walker on cloud | Secure Any Cloud" width="65">

  https://www.dependencywalker.com/

  ![](https://www.dependencywalker.com/snapshot.png)

---

## Doxygen (Code Documentation)

<img src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAoHCBYVEhgWFhYZGBgaHBwcHBgaGhoYGhwaHBwZGhocHxghIS4lHiErIRkaJjgmKy8xNTU1HCU7QDszPy40NTEBDAwMBgYGEAYGEDEdFh0xMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMTExMf/AABEIAHoBmwMBIgACEQEDEQH/xAAbAAACAwEBAQAAAAAAAAAAAAAABQMEBgIBB//EAFMQAAEDAgEGBwoICwcDBQAAAAEAAgMEEQUGEiExQVETImFxgZGhFBYyUnKSsbLB0iNCVIKU0dPwBxUkJTM0U2Jzo+FEVWSDk6LCF2PjNUNF4vH/xAAUAQEAAAAAAAAAAAAAAAAAAAAA/8QAFBEBAAAAAAAAAAAAAAAAAAAAAP/aAAwDAQACEQMRAD8A+zIQhAIQhAIUNRMGsc46Q0FxA12Av7FnI8s2OFxT1BB2hjSOsOQalCysmWjGi7oJwN5a0DrLlpo3ggEbdKCRCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBC5c4DWbLxrwdRB5jdBXxT9BL5D/VKTZIH8ij+f67k5xT9BL5D/VKTZIfqUfz/Xcggy4/VD5bPaneGOuwcw9CSZcfqh8tntTrCfAHMPQgYoQhAIQo+Fb4w6wgkQhCAQhCAQhCAQhCAQhCAQhCAQhCAQhCAQhCAQhcucBrIHOg6QuGPB1EHmN12gEIQgEIQgEIXJcBr0IOkKMSA6iDzEKRAIQhAIQhAIQvCUHqFG2QHUQeYhSIBCEIPFlKvHJaiQxUYFm6HTu8EeT9em+wbVNldWOIZTRGz5jYnczb16ehrlfw+kZDG1jBYDrJ2k8pQKW5KMdxp5ZJXbSXWHQNJ7V67JGAaWPkjdsc1+r786s4zjjKezbF8jvBY3Wdlydg9KWNxSvdpbFGB4pvfrz/AKkHNZWVNLG5kx4aF7XNEg8Npc0gZ39evYmmSP6lH8/13KrSYyJiaapjzHvFs0+C8Hcdh3c2g3TihpWRRhjBZrb2BJOsknSeUoFWXH6ofLZ7U6wnwBzD0JHlsfyM+Wz2p5hPgDmHoQX3OsNOgLLVOPyzvMdE0EDQ6Z3gDyd/Ppvu2rzKWpfNK2jjNs4Z0rhsZ4vt5btG0pvR07ImNYxua1uoekk7Sd6BMMmHSaampkkO4HNaOYG/ZZd959Nufz55uvcWyhEb+CiYZJNoHgt5zv5O0Km3EsQ8LgoiPFF79eegsd70kWmmqZGEfEec5h9nYVNQZRPZIIatgjefBeP0bunZz6uZSYRjrZiWOaY5W62O9IO3m1q1idAyojLHjXqO1p2EffSgcgrJ5ZRzsAmjlkawWD2tcQANjgL9B6OVSZLYg8F9NKbvi0A+MzYe0dBC0c0bXNLXAFrgQQdRB0EIMrT4RM9jXsr5S1wBB06j85Q10NTSZs4qJJmNdx2OvbNOi9rn+mgrrC3mjqTSvJ4N5zoXHefi37OfylpHgOBa4XBBBB1EHWEE1FVtlY17DdrhcFIsocQe+VlLTuLZHWc97dbGa9Y1b+obUohr3Ye+SNwLoyC6Hn8Undv5r7U1yboHMY6WTTNKc55OsA6Q3k3kdGxBz+Iqj5dL2+8k87KgVTadlXK8gXe65AYPO0m3pC0OPYsKeIuGl7uKxuu7t9tw19Q2qnk1hhY0ufpe85zydJudNr9PXdAuwenqJnSMdVysfG7NIuTcabHwhuKZSYHU2Nq2UmxsNIudg8JcVze5sRY/UyduY7dniwH/AA7Vos5AtyTxIy07c8kvYS1xOkkjUSd9iFoFi8LPA4hLHqbJx28+s+l3mrZNOhAhyvrnRwBrHFr5Hta0g2Ou5segDpVMYFUfLpe33lzibuGxKNmtsDc93lmxH/BProMhVwzx1UUIqpX5/GfxnNzWA+UdYDluI5bi50AabncsXgzuHq5Z9bb5jPJFvYAekq/lPUOeY6SM2dLpedzB9difm22oOZ8YnqnuZScSNps6dw1+SPueZesyTjdplkkldtLnW+s9qb0dOyKNrGCzWiw9pPKdaX4xjrYSGNaZJHamDYN5OzmQQPyShGmN8kbtha6/9e1UcQxOppmOilcXhzSI526HB2wE7+3lKkGJV50iKO3i7evPU8OIMq2vppmGN+1h16NOcwka9tt28IIsPwyokiY/u2Vue0OtpNri9r5yhrGT009ODUySNkfYgkgWaWaLXN75y0tJCI2MY25DGhovrsN6Q5Vn4al8t3pjQa+GTOC8nnaxhe4hrWi5J1ALij8FZXEnmtqjCCRTwn4S3x36rX57jocdyCR+L1FUSKYcHEDYzPGk+SPvzhetyUY/TNNLK7aS6w6BpPanQLGM2MY0czWtHoCzsuUcsjiKaLOaNGe+4B5hcem/IEFp2SFN8XPad4f9YUbqWspuNDIZ2DXG/S637p+rqKh/G9awZ0kDHsGvgyQQOs+hPMOxFk8Yew6DoIOtp2g8qCXBcaZUMu3iuGhzD4TT7RypqsXj1O6CRtXELFptI0aA9p0XPoPQdi1VDVNkY17TcOAI5igzGLmWTEOBZO+JvBh3FJtcE7LjWpfxHUfLpe33lzUH87/5PtKe5yDHYPlDPwZhZnSzue6znkkMZZouSeW/IOxM25Nuk41TO+R3itOawc2j0ALhrYMPY513PfIdA0Z7rbBuaCdfLt0LgY7VO0tphm7nO0+z0ILLskabZntO8P8ArCgkhqqMZ8chniGlzH6XBu0g/V1K5hOOiV5jewxyN0ljto3g6PvvTbOQd4ZiDJ42yMOg7NoO0HlCvLF4GeArZoBoY6z2Dde312+atiHIMlTHhcTnedIja1jeQ6j2h/WnjngC51DSVn8APw9WdvDO9Z6ZYk+0MhGvMf6pQJMnoTPI+pfpL3ENvsaNg6LD5q2cNMAFnsjGDuZnzvXctUgz2VeFiSnc5uh8YL2uGsZulwvygdYC7wms4WBjzrc3T5Q0O7QU4qm3jeDqLT6Csnki/wDJG8jn+m/tQdZZn8kPlt9q0GFHiDmHoWcywP5IfKb7U8p3WgcRsYfVQJMmDnvnqDrkeQORo0gdoHzU1xSr4KF79rWkjyjob2kJXkloo2c7/WKMrH/kj+dnrBBzkrh3wYe7S9/GcTrN9I+/KtYymACoYIwCNnkt9ATdBk8sKLMa2pZokic03G1pNrHpPUSmsE4exrxqcA4cxF11lK0Gjnv+zcekC47QlmBv/JYvICCljR4Ksp5hozzmO5dgv53+1bCB9wsZlcfg4ztEjbdRWtoTxUFHKPCRUwlo0PbxmO1WcNl9x1dR2JfgOJmWMtfoljOa9p0G40Z1uW3XdalYjErfjNvAeFm/DeLbRr/etbptyoHdXRslzM9udmODm849I5OQKWWYMaXONmgEknYAuc5I8rWvMAzfADgXgay3Zp3A+zcgrUDHVVQZ3jiNObG07ht++3mW1pYc0JZgMbDEx0ds0gW5t3OnYCBBljRcJSuc3woyJGnbxfC/236gusNrOFhY/wAZov5Wpw6wU7e0EEHSDoIWMyfvDJPTH4js5nKx1vZmn5yD3KfiSQVA+I/Nd5J0+91rWQSjMzidAF78mu6RYvTcLA9m0tuPKGkdoSn8cfmsm/HI4LlvqPTmXKCxkwS901S7XI825GjUO23zVdyhreCpnuB4xGY3ndov0C56F3hdPwcLGbWtF/KOl3aSk+NO4arihHgs47/YD0D/AHIG+TFDwcTG202uec6T9XQqdAc/EKmQ/EtG3k2H1D1rS0MdgstgB+Gqr6+GPpfZA+klDWlx1AEnmAus3kxTGUvnfpfI46dwvqH32BOMUPwEtvEf6pUORoHc7On1ig0EVMAFncsqHNjbUM0SROab72k2sekjt3rVpRlQB3HNfxD13Fu1BzBMHsa8anAOHSLpDlOfhqXy3eliYYK78mi8hvoSzKQ/DUvln0xoNLV1XBU0km1jXEc9uL22SjJanzKVhPhSXe47TnauwBT5UOth8lv3B1vYuqDRDGBsYz1QgWZY1Vo2Mzs0SP4x/dbYntI6lNh2KUbGhvCtAAsBmv8AdV6pZG62eGHdnhp57XUHc9N4sXUxBZ74aP8AbN813upFhVXG2ueyF4dHK3OAAIAeNJFiB+91hNO56bxYupi7jjgaQ5rY2kaiAwEdKC7MwPY5jtTgQeYixSrIqciN8Tjpje5vRr9N1f7pZ47fOCUZPPtWVIGouB0atJd9aCerP52/yfrTnOSOsP51H8Ee1OM5BnIGcPXyOdpEdmNG46dPWHda2EFKLLK5MC89Sf8Auu9Zy2rdSDJZWQCKSmnboIkDCd7Tpt1B3WU5zkty9H5PH/GZ6r1eLkCOsNsTiPjRkHoz1r2O0LGV5/OMHkH/AJrYxaggyVCMyuqo/GcHj53GPrhNpW5zS06iCOsWS7KyIw1EVUBxfAfbdpseonzQrzXggEaQdIPIgo5ETWjdG7wo3uaRzkn053UtgsNW00kc3dFPpd8dmx438/1X33vR5aMAs+GZrvFDQdPOSD2IHWPVQipZXk2swgeU4Zre0hIsnosyljB1kZ3nEuHYQqdVNLWvbntMVO03zT4Tzy/fRc69jgOGxAqytP5KfKb7VpcOZnRW3tt1iyy2VZ/Jj5TfatXhPgDmHoQZfJV9onRnwo3uaR9+W6t4/Fn00jRrtneaQ70Aqtibe5a0yHRFPrOxrxrv06fnHcmmcgmyXqQ+nY790A87dB9CerAwOlopHOjYZIXG5jHhMPJ99mnemffrHbRDMXeLmt18979iC5lnVBlG8bX2YBvubnsBUNBHmRMZ4rWg84AulQbLUzNmnbmMZpZFuO93Zu1DQE2c8AXJsBpJOwIE+Ubs+SnjGtz848wsPaepbGgHFWKwoGpqnT24jOIz2ntJ+dyLbtcGMLnEBoBJJ1ADSSgoZRYsKeEuGl7uKxuu7jttuGvqG1J8EoTFGXP0yPOc9x0m502vyX6yVTglNXUmocPg2HNiaeT41t+3nsPipvJKGtLnGwAuTuAQc1WIMjLA82L3Zo+s8l7C/KFO6xBBFwdBG8LLQULq1z5HXa0gtjG62on2853BMsErXPaY36JIzmuB1kDQD9/ag8wioNJU8C4/BSG7CfiuPxfQOreVtmm4WRxSiE0ZYdB1tO52zo2K5krixkYY5NEsfFeDrIGgO+vl50GkWOynZwNXDUDwXfBv9hPQT5q2KUZTUPDUr2AXcBnN8pukdYuOlBXzlj20Z7t4H4gfwttlrZ3/ANU9war4SBjtts13O3QevX0q7YXvYXta9tNt10ErpAASToGk8wSTJiMySSTn47rN8kfcD5q7yiqiyAtHhSEMHTr7NHSnWT9HmRsbuA69vagdRNsFjaX4OvqWeOQ8ct9J9fsW1WSyvpnMfHVsF8zivG9h1HtI6RuQXX2IIOogg8x0JXkfUZjn0zzZ7HEt/eadNx6elXoJ2vaHtN2kXBVLEsNbKQ4OLHt8F7dYQbMLK5Z1ucxtMw3kkc24HxWA3ud1yOoFUg2vtm91DN35jc7rzb9q4jpmUzHSvc57z4T3aXOJ2C528/SgcQsDGtaNTQAOYCyS5Qn4al8s+liaU1QHxteLgOAIB16Upx0/DUvln0sQaHHIM+hlaNeZneYQ72Kjg0+fTxn9wDpbxT2haGnaCyx0gixHIsbh7TTzvpn6r58ZO1p2dQ6w5BzlZGCInOHFD7O5nWv6pV2PJOBwuGnznfWpq6mbLG5jtR27jsKp4fjE1KBHNE6RjdDZI9JtsuPrt0oLXefB4h8531qnX4FRwZvCnMzr2uXm9rX1c4V9+WbCLRwSudsBaGjrBJ7FQhpZJpeHqQCbWZHYFrRyj7+iwU+5cO8f1/qTvJ2kpxnOpznC4DjxtesDjc6X4wIoonO4NmceK0ZjfCO3Vs1pvktSGOBjNp4zvKP1Cw6EC+v0YoP4I9qaZyV4l/6p/kj2phdAtyV/S1P8V3pcto3UsXkn+lqP4rvS5bRupBmcvf1eP+Mz1XqwXKvl9+rM/it9V6kJQJ6w/nCDyD/zWzi1BYuo/wDUIfIPoetpFqCDytpWyxuY8Xa4WI9o5dqxRdJRO4OUF8N+JIBew3EezqunmO5aUNHIIqmfg3locG8HI/ikkA3a0jWDt2JTN+ErCXAh1SCDrBhnIPRwaC7T1THi7HtdzHT1awpXyAC5IA3kgLGVWUOBvNxUFvkx1A7MyyrNxzBb6ap7udk/sjCDR4hjGd8HBx3u0Zw1NG0338uxQ5OVkbIbPe1pzybOcAbWCgostcHjFm1AaOSGfTznM0qN+VeB7JWf6M/uILeUdbG+AtY9jjnN0BwJ27FtcJ8Acw9C+d99OB/tW/6M/uJzTfhKwpgt3V/Jn+zQa7FcPZPEY3jQdR2g7COVY4yy0ZzJ2l8Y0MlbpsNgP1elW/8AqjhXyr+TP9mo5fwl4S4WNTe+zgZ/s0Fqmr43jiPaeS9j1HSrGdyrH1mUmBvN+HDT+7FUN7My3YqJxzBvlb7bsyb7NBs6nEooxxntvuBzj1BKnvlqzmsaWQ7XHwn/AH6kspcpsFYbicE73RTu9LE5g/CHhLf7T/Jn9xBp8Jw9rGhrRYDUkmV+KB720rXhoNjK8kAAaw2+/bbm5V4Pwn4UP7V/Jn+zSmpyywN7i4yMLiSSTDPck6yTmIG8NdTsaGNkYGtFgM4JfidT3RI2CJ12njPe3SLDZf76bJecqsD/AGrP9Gf3FYo8tcGjJLKgNvrtDPpt8xBtcLogxoAFgBYBJ8q6F0b21cY0tsJGj4zNV/Z1blBH+E7CgP1r+TP9mvJfwm4S4Frqm4IIIMM9iDrH6NBKzFYSAeEYLi9i4AjnG9K8RrGMlZUwvYXt0PYHDjt1auzq3KnJlXgZ1SsH+TP9muBlTgf7Vn+jP7iD6Rh1Y2WNr2G7XC4+o8oV1ZVmKU9NTxSxtc6Kazm5jbXDm5wdmuIIuLcq6796a2qS/i5gv6bdqBZRR8DVzwfFvnt5A6xt1OA6E2SrDi+WeSpe0sz7NY06w0W09g7UxnlDGOe7U0EnoF0CeYcNWsZrbEM4+UbH3eorcUbLNWOyWZZj53m2eXPc46g1tyTzeEVIz8J+FAfrX8mf7NBtlHLGHNLSAQRYg6QQdYWP/wCqOFfKv5M/2a5xnEp3VTGQz5kckbXsOaCDcE7RfSBdAVeCTUzy6m48ZNzE46R5J2+nnVf8fhuiSGRh5rjtspjHXH+1f7G+6u8Cr38K+CofnPuCxxsM4Eahq5+k7kFQ5QB2iOJ7zzWHZdVK+imkjfLMc0MaS1g1A8q3raILP5XVLRGKZmmSQgZo+K297nde3VdBxhH6vH5DfQqONi89KP3z6WJtTxBjGsGpoA6hZKak59fGwaRG0uPIT929aDbUfgpdlDgralgsc2RmljhrB3HkVHE8rqWje2KVz88sD81kb32aSQCc0G1y09Sqn8JFD/3/AKPL7qCnHir4ncHUtLHDU8C7Xcuj2diaQ1LHi7HtdzEFLavLugkbmvZO4bjTSEdrUhnxbDHG7WVTfJhl9BBQbRzwNZA6UurMaiZoDs92xrNOnn1BZUYlh+1tWeeGT2NTGjykoI/BhqAd/c0hPWdKBjQYfJPIJZhYDwGbuUra0kOaFjYcvqRv/tVX0Z6n/wCpFN+xq/oz0HGMzNZiec5waOCAuTYbdqn/ABnD+1Z5wSivyxoJXZz6Oqc61s40zr2Goa0uOUeH/Iqv6OfeQaHJFwMk5BuDISCNRBLiCts3UvmlBlpSxXzKSrbfXaAC/W9MT+EuEf2StP8AlM9siBpl8fyZn8VvqvVc4nD+1Z5wSuty/ppmZr6CseAbgOijtfSL/peUpU/KSiP/AMdVD/Kj+0QNnVDH18JY5rgGkXaQdNnrdRagvm2G5S0gnia2iqY3yPZGx7o2NaHPOaLnhDo07l9LbCg+YZZsvjgG+iaeqZ4UfAFO8rcmaybEG1VNwBApxCRK57TfhHPJAa07CNu9UO9zFvFofPm9xBT4Ao4Aq53uYt4tD583uLzvbxbxaHz5vcQVOAKOAKt97eLeLQ+fN7iO9vFt1D583uIKnAFHAFW+9rFt1D583uI728X3UPnze4gqcAUcAVb728X3UPnze4jvbxfdQ+fN7iCpwBRwBVvvaxf/AAPnze4vO9rF/wDA+fN7iCrwBRwBVrvaxf8AwPnze4ve9rF/8D503uoKnAFHAFXO9nFv8D503uo72cW/wPnTe6gp8AUcAVc72sW30PnTe6jvZxbfQ+dN7qCnwBRwBVzvZxbfRedN7q972cV30XXN7qClwBVbEoTwEnkP9Upt3s4rvouub3VxPknir2OYXUVnNLTpm1EEeLyoLN/zXhXkweo1aIqCLJlxw+mp3yZr4GMBczjAua3N0E2NuVU34BUjVUv6Wk/8kDNIMVquHeKeI3uQXvGkAA6r7f8A8G9Wu9qR+iSeR43DQPSU6w3BWxNsxoHKdNzsudZQZPLaq4OlZQxfpKkZujTmQD9I47rjijfc7kvhogxoa0WDQAOYaAmTvwf1hqJKg17DJJYEmmuGtGprQZOK0buTTdT941d/eEf0RvvoE09GHscx2pwLTzEWKt5Oh1Th8bGm1VQO4Mt2ua3wDbc5oFt5aRtV7vGrv7wj+iN99eYdkLWQ1QqW17M/NzXN7msx7fFe0SC/IdYQMMMxJkzfFePCYdBBGuw2j7ld1+HRzCzxpGpw0OHT7CmGMZORzHP0sk8dmg35Rt59fKk78NrY9DJGSD98aev+qCNuEyDQ2qmDfFz3auh1uxWaDCmREuF3POt7jd3LzKse7vEj57/1R+L6x+h8rWDcwaeuwPagsYpirIhYcZ58Fg0m+y9tQ7SoMMY2mikqal+boL3uOwbGjeSdg2kAJhheTrIznWLnbXu0n+iWZR5JVlVM1wnhbDGc5kLmPc0uGpz7OGe4bBqHaQzdKHzySVUrS107gQ062RtFo2nlDdJ5XFW+50270K/5TTf6D/tF6Mj6/wCVU3+g/wC0QKO50dzpz3nV3yqn+jv+1R3m13yyD6M77VAm7nR3MnXeZW/LYfozvtV53l1vy6L6KftUCbuZHcycd5Vb8ui+i/8AlR3k1vy+P6L/AOVAn7mR3MnHeTW/L4/og+0XneRW/wB4M+iD7RAo7mR3Mm4yHrf7wZ9Eb9ouhkPV/wB4N+is99Am7mR3MnQyHqv7wH0ZnvroZEVPy8fRo/eQZmWG1VQjfVxf7c53/FfYliKTIiRs8MslXwgieHhnAsZdwa5o4wdf4xW3QCEIQCEIQCEIQCEIQCEIQCEIQCEIQCEIQCEIQCEIQCEIQC5zQukIOc0L0BeoQCEIQCEIQC4cwFdoQRcCECEKVCDmwXSEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIBCEIP/Z" title="" alt="Doxygen: Doxygen" width="234">

  [Doxygen: Doxygen](https://www.doxygen.nl/index.html)

  ![Doxygen, a document generator mainly for C++ | Documenting APIs](https://s3.us-west-1.wasabisys.com/idbwmedia.com/images/api/doxygensample.png)

---

## Sonarlint (Code Quality and Code Security Extension)

<img src="data:image/png;base64,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" title="" alt="Logos and Usage | SonarLint" width="177">

  https://www.sonarlint.org/

  ![](assets/7ef6f7e6a2d7de02db74363599079315ec8e54ce.gif)

---

## Codepen.io (online code sharing)

<img src="data:image/png;base64,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" title="" alt="Logos - CodePen Blog" width="54">

  https://codepen.io/

  ![CodePen Feature](https://i1.wp.com/blog.codepen.io/wp-content/uploads/2020/06/Screen-Shot-2020-06-08-at-6.47.23-AM.png?fit=1024%2C940&ssl=1)

---

  Credit Card Sample

  https://codepen.io/quinlo/pen/YONMEa

---

## Codeshare.io (real time code sharing)

<img src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAkGBxQHBhUSExMWFRUWGRoVGRgYGBwfHxYdGxsWGBgeHR0kHSkiGCAqGx4dIjEiJSkrLi4uGB8zODMsNygtLjcBCgoKDg0OFRAQFy0ZFx0rLSstLSsrOCstLTcrLS0tKy03Kys3KysyNy0tNystOCstNystKzcrKystKystKysrK//AABEIAIkBbwMBIgACEQEDEQH/xAAcAAEAAgIDAQAAAAAAAAAAAAAABgcEBQECAwj/xABAEAABAwIEAwUEBwcDBQEAAAABAAIDBBEFBhIhBzFBE1FhcYEUIpGhMjZSc7GysxYjQkNidKIVNdFTY4KSozP/xAAYAQEBAQEBAAAAAAAAAAAAAAAAAQIDBP/EAB0RAQEBAQABBQAAAAAAAAAAAAARATESAgMEMkH/2gAMAwEAAhEDEQA/AKxREW2RERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAW/yxk6qzRG91O1mhh0l0jtILrX0jYkm1ulhcbrQKweFedWYBIaWo2hkfqEn/TeQGnV/QbDfofDkVB8Sw+TCq98MzCyRhsWn5Ed4PMELGX0BxMwGlxbAjNPIyF8QvHOfHkw23e1x6De+4Xz/ANEAmylMvD2vhwQ1RiaGBuss1fvA3mSWW6De1726dFI+DmAUtfUOqJJGyTRG7YD/AC+6Qg/S35WuB58pVxNzszA6F9NEQ+okaWkdImuFi539RB2HqduaiiUXAFgplw1ygM0Yo50t/Z4bF9ti9x+iwHptuTzt5oiN4ZhE+LOtBBJLbnoaSB5nkPUrZyZHxGNlzRTW8A0/IOJV4Y/mKkyVhzGuAYLERwxNF3W52bsAB1ce8KJR8ZoDJ71JMG94ewn4bD5qVVQVED6aUsexzHDm1zS0j0O681vM7Y4Mx5llqGghh0tYDzDWiwv4k3PqtEXBo32VRyi6lwbzK7ICIuNQva6Dd4PlSsxul7WngdIwEt1B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mX7h36kSyuPjdVfSD/tzD/KNV3h2JTYXPrglfE4jSXMcQSNjbbpsF2xLFZ8VkDp5pJS24aXuJ0g87dykH0FgVXDnDJYaHe7JD2Moafejdo0OHgeo9FFst8K34HmSKpNW17YnFwb2RDnXa5oudZA581UVDXS4dPrhlfE7vY4tJ87c/Vbc53xEtt7bN8R+NroVaHHD6pxf3Df05V14G/VaX+4d+nEqbrcQmxCTVNNJKf63ud8Lnb0XvhuO1OFRFsFRLE0nUQx5AJsBe3fYBWDc8Ufr/Vecf6US8+HmYhlrMrZX37J4MUlujSQQ63WzgD5XUfq6p9bUmSR7nvdu5zjcu2A3PXYAei8kH0Rm7KVPnehjeJLOaCY5mWcC11iQRezm7X5gqH0vBe0n7ytu3uZDY/EyEfJVrheNVGEf/hPLEDvZjyAf/Hkfgs6ozliFQyzq2e3g/T82gFQrGzNhX+hZhnprkiJ+kE8y0gOaT46SL+N1rF2keZXkuJcTuSSST5k7ldVUEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERAREQEREBERB//Z" title="" alt="CodeShare lets you share code in real-time via your browser. Debug, pair  program, or teach. CodeShare even lets you video cha… | Coding, Pair  programming, Real time" width="143">

  https://codeshare.io/

  ![Codeshare presenter demo image background](https://codeshare.io/-/img/example-chrome.png?v=v3.6.0)

---

## Codebeautify.org (online data conversion tools)

<img src="data:image/jpeg;base64,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" title="" alt="Codebeautify (@Codebeautify) | Twitter" width="82">

  https://codebeautify.org/

---

## AsciiFlow.com (ASCII drawing tool)

---

## Freemind (opensource mindmap application)

---

## Wireflow (user flow designer)

---

## PlantUML (software designer)

---

## Drawio (drawing tool)

---

## Putty (Remote Connection)

---

## MobaXterm (Remote Connection)

---

## Teamviewer (Remote Connection)

---

## Paletton.com (Color Chooser)

---

## Understand (Static Code Analysis)

---

## JD Project (Java Decompiler)

---

## Cutter (Multi-Platform Reverse Engineering Tool)

---

## IDA Pro / Freeware (Native Reverse Engineering Tool)

---

### Code Visualization (Python, C , C++ , Java)

https://pythontutor.com/

---

### Assembly of C Code

https://godbolt.org/

---

### Mobile Device Screen Sharing for Demo

[GitHub - Genymobile/scrcpy: Display and control your Android device](https://github.com/Genymobile/scrcpy)



---

## Travis-CI

- Travis.yml

## Jenkins

---

## Valgrind

---

## Docker

    - https://www.youtube.com/watch?v=nBwJm0onzeo&ab_channel=GaryExplains  Dockerfile

- DockerHub

- Docker Compose Yaml

- Dockerrun.aws.json (AWS)

---

## Nuget Packages

---

## Vim for Windows

- vim/vim-wim32-installer (windows vim installer)

---

## SCV Cryptomanager

---

## Addario CryptoBench

---

## Raymond's MD5 & SHA Checksum Utility

---

## SlavaSoft HashCalc

---

## Portable PGP

---

## Online Programming Envoriments

 i. Hackerrank

 ii. CS50 Sandbox

 iii. Programiz C Online Complier