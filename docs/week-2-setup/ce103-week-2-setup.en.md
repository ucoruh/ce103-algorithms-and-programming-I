---
marp: true
theme: default
style: |
  img[alt~="center"] {
    display: block;
    margin: 0 auto;
  }
_class: lead
paginate: true
backgroundColor: #fff
backgroundImage: url('https://marp.app/assets/hero-background.svg')
header: "CE103 Algorithms and Programming I"
footer: "![height:50px](http://erdogan.edu.tr/Images/Uploads/MyContents/L_379-20170718142719217230.jpg) RTEU CE103 Week-2"
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
math: mathjax
---

<!-- _backgroundColor: aquq -->

<!-- _color: orange -->

<!-- paginate: false -->

## CE103 Algorithms and Programming I

### Week-2

#### Software Development Environments

Download [DOC](ce103-week-2-setup.en.md_doc.pdf), [SLIDE](ce103-week-2-setup.en.md_slide.pdf), [PPTX](ce103-week-2-setup.en.md_slide.pptx)

<iframe width=700, height=500 frameBorder=0 src="../ce103-week-2-setup.en.md_slide.html"></iframe>

---

<!-- paginate: true -->

#### Outline

- Flowgorithm
- Introduction to Analysis of Algorithms
- Programming Environment Setup and Configuration
 	- C/C++ (DevCpp,Code Blocks,MinGW,LLVM,VsCode,VisualStudio,Notepad++,Vi/Vim,Eclipse,Netbeans,Cmake/Make)
	- Java (VsCode,Notepad++,Eclipse,Netbeans,Cmake)
	- C# (VsCode,Notepad++,VsCode,VisualStudio,Cmake)

---

#### Outline

- Common Tools and Platforms
	- Fatih Kalem, Notepad++,HxD, MarktextApp,Cygwin,Dependency Walker,Doxygen,Sonarlint,
Codepen.io, Codebeautify.org, Codeshare.io,AsciiFlow.com, Freemind, Mockflow, Wireflow, PlantUML,Drawio,Putty, MobaXterm,Teamviewer,AnyDesk,Paletton.com,Colorhunt.co,Understand,JD Project,Cutter,IDA Pro / Freeware,pythontutor,godbolt,scrcpy,Travis-CI,AppVeyor,Jenkins,Vagrant,Docker / Docker Compose / Kubernetes,Nuget,SCV Cryptomanager,Addario CryptoBench,Raymond's MD5 & SHA Checksum Utility,SlavaSoft HashCalc,Portable PGP, and more ...

---

## Algorithm Basics

---

### Flowgorithm (1)

- http://www.flowgorithm.org/

- [Flowgorithm - Documentation](http://www.flowgorithm.org/documentation/index.html)

- https://github.com/timoteoponce/flowgorithm-examples

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (2)

- Main Window

![center h:500px](assets/2022-10-01-13-51-46-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (3)

- Console Window
  - The classic method to interact with the computer is to use the "Console". Flowgorithm attempts to make it look like a typical instant messenger window. The "chat bubbles" are color coded to match the Input and Output shapes used in the flowchart. If you don't want to use the chat bubbles, you can also toggle between them and the classical plain text.

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (4)

- Console Window

![center h:450px](assets/2022-10-01-13-52-08-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (5)

- Source Code Viewer Window
  - The Source Code Viewer can convert your flowchart to several major programming languages. So, if you planning to learn a high-level language, then this feature should help you along the way.

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (6)

- Source Code Viewer Window

![center h:450px](assets/2022-10-01-13-52-35-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (7)

- Variable Watch Window
  - The variable watch window is used to keep track of how your variables are changing as your program executes. Each variable is color-coded based on its data type. At a glance, you can tell exactly what type of data is being stored - and catch where you may want to use a different data type.

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (8)

- Variable Watch Window

![center h:450px](assets/2022-10-01-13-52-59-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Flowgorithm (8)

- More Resources for Flowgorithm
  - [Flowgorithm Tutorial - TestingDocs.com](https://www.testingdocs.com/flowgorithm-flowchart-tutorial/)

---

<style scoped>section{ font-size: 25px; }</style>

### Pseudocode (1)

- Algorithm design language

  - [Pseudocode - Wikipedia](https://en.wikipedia.org/wiki/Pseudocode)

  - [Pseudocode Examples](https://www.unf.edu/~broggio/cop2221/2221pseu.htm)

  - [How to write a Pseudo Code? - GeeksforGeeks](https://www.geeksforgeeks.org/how-to-write-a-pseudo-code/)

---

<style scoped>section{ font-size: 25px; }</style>

### Introduction to Analysis of Algorithms

- In this course, we will learn how to code with several development environments and next term we will see an analysis of algorithms in detail.

- This topic is covered in the following link:

  - [CE100 Introduction to Analysis of Algorithms](https://ucoruh.github.io/ce100-algorithms-and-programming-II/week-1/ce100-week-1-intro/)

---

<style scoped>section{ font-size: 25px; }</style>

### Programming Environment Setup and Configuration

- Programming life is not about only learning how to code. Mostly you need to use several code development environments and you need to learn how to use them efficiently.

---

<style scoped>section{ font-size: 25px; }</style>

### C / C++ Environment and Development

---

<style scoped>section{ font-size: 25px; }</style>

#### DevCpp (Install / Compile / Run / Debug) (1)

- Download DevC++ IDE from the following link
  - https://www.bloodshed.net/

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (2)

- Open DevC++ IDE for C Project Generation `Open File->New->Project`

![alt:"alt" height:400px center](assets/2021-10-22-02-34-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (3)

Select **Console Application** from **Basic** tab and with **C Project** Option and write a project name such as "**Hello**" then press OK

Select a folder and save **Hello.dev** project file.

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (4)

- You will see a sample main with an empty body

![alt:"alt" height:300px center](assets/2021-10-22-02-38-47-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (5)

```c
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, s,ystem("pause") or input loop */
int main(int argc, char *argv[]) {
    retAdd 0;
}
```

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (6)

- Add the following line in the main function. This will write "Hello, World!" on the screen and then wait for a keypress to exit from the application

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

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (7)

- Then save the file

![alt:"alt" height:450px center](assets/2021-10-22-02-41-04-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (8)

- Use from menu `Execute->Compile F5` to generate `Hello.exe`

![alt:"alt" height:450px center](assets/2021-10-22-02-43-04-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (9)

- You can find the generated `Hello.exe` path from Compile.log as follow. Check the Output Filename

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

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (10)

- Then you can run with `Execute->Run F10` or Directly `Compile&Run F11`

![alt:"alt" height:450px center](assets/2021-10-22-02-44-37-image.png)

---

##### DevCpp (Install / Compile / Run / Debug) (11)

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

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (12)

Click on line numbers and add breakpoints for the debugger. This red point will be debugger stop points

![alt:"alt" height:450px center](assets/2021-10-22-02-52-41-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (13)

- In the menu section, select the compiler with debug option

![alt:"alt" height:250px center](assets/2021-10-22-02-53-40-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (14)

- Compile application with debugging setting and in Execute Section use Debug F5 to start debugging

![alt:"alt" height:450px center](assets/2021-10-22-02-55-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (15)

- The debugger will stop at the breakpoint at the debug point (blue line)

![alt:"alt" height:450px center](assets/2021-10-22-02-56-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (16)

- Moving to the next statement can be done via control buttons or shortcuts

![alt:"alt" height:450px center](assets/2021-10-22-02-57-14-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (17)

-Press `F8`to step-by-step continue

- Then go to `Project Options -> Compiler -> Linker` and set Generate debugging information to "yes", and make sure you are not using any optimization options (they're not good for debug mode). Also, check the Parameters tab, and make sure you don't have any optimization options (like `-O2` or `-O3`, but `-O0` is ok because it means no optimization) or strip option (`-s`).

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (18)

- After that, do a full rebuild (`Ctrl-F11`), then set a breakpoint(s) where you want the debugger to stop (otherwise it will just run the program). To set a breakpoint on a line, just click on the gutter (the gray band on the left), or press `Ctrl-F5`.

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (19)

- Now you are ready to launch the debugger, by pressing F8 or clicking the debug button. If everything goes well, the program will start, and then stop at the first breakpoint. Then you can step through the code, entering function calls, by pressing `Shift-F7` or the "step into" button, or stepping over the function calls, by pressing `F7` or the "next step" button. You can press `Ctrl-F7` or the "`continue`" button to continue execution till the next breakpoint. At any time, you can add or remove breakpoints.

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (20)

When the program stopped at a breakpoint and you are stepping through the code, you can display the values of various variables in your program by putting your mouse over them, or you can display variables and expressions by pressing `F4`or the "add watch" button and typing the expression.

---

<style scoped>section{ font-size: 25px; }</style>

##### DevCpp (Install / Compile / Run / Debug) (21)

[How do I debug using Dev-C++](http://eilat.sci.brooklyn.cuny.edu/cis1_5/HowToDebug.htm)

---

<style scoped>section{ font-size: 25px; }</style>

#### Code Blocks (Install / Compile / Run / Debug) (1)

Download Code Blocks from the following link

[Binary releases - Code::Blocks](https://www.codeblocks.org/downloads/binaries/)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (2)

Open Code Blocks and

Select `File->New->Project`

![alt:"alt" height:450px center](assets/2021-10-22-03-33-42-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (3)

Select `Console Application`

Click `Next` from Opening Window

![alt:"alt" height:450px center](assets/2021-10-22-03-34-32-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (4)

Select `C` for Sample Project

![alt:"alt" height:450px center](assets/2021-10-22-03-34-44-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (5)

Write a project name and title also set a project folder

![alt:"alt" height:450px center](assets/2021-10-22-03-35-41-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (6)

Select a compiler for this project we selected `GCC` but you can select C compilers from the list. Set Debug and Release executable output folders.

![alt:"alt" height:450px center](assets/2021-10-22-03-36-10-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (7)

- After this wizard, you will have the following code

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

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (8)

Select `Debug` Build from the menu

![alt:"alt" height:300px center](assets/2021-10-22-03-38-33-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (9)

Run with Build and Run `F9`

![alt:"alt" height:450px center](assets/2021-10-22-03-36-51-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (10)

- You should see the following output

![alt:"alt" height:450px center](assets/2021-10-22-03-37-14-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (11)

- Add the following lines to your source code for debugging

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

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (12)

- and add breakpoints with `F5` or mouse click

![alt:"alt" height:450px center](assets/2021-10-22-03-44-38-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (13)

- select `Debug->Start/Continue` to start debugger

![alt:"alt" height:450px center](assets/2021-10-22-03-45-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (14)

- If you see the following error this is related to long or turkish characters including the path. Just move the project to a shorter path and try again

```batch
Setting breakpoints
Debugger name and version: GNU gdb (GDB) 8.1
Starting the debuggee failed: No executable specified, use `target exec'.
Debugger finished with status 0
```

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (15)

You will see the following yellow pointer for the debugger

![alt:"alt" height:450px center](assets/2021-10-22-03-44-38-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

##### Code Blocks (Install / Compile / Run / Debug) (16)

You can use the following menu or shortcuts for step-by-step debugging.

![alt:"alt" height:150px center](assets/2021-10-22-03-45-08-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### GCC/G++ Complier (MinGW) / Clang-cl (LLVM) (1)

Download and install `MinGW` or `LLVM` compiler (if you downloaded then skip this step)

- MinGW installer (clang)

  - [Download MinGW-w64 - for 32 and 64-bit Windows from SourceForge.net](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)

- If you have a problem try `Github`` builds

  - https://github.com/niXman/mingw-builds-binaries/releases
  - https://github.com/niXman/mingw-builds-binaries/releases/download/12.2.0-rt_v10-rev0/x86_64-12.2.0-release-win32-seh-rt_v10-rev0.7z

- LLVM installer (gcc/g++)

- [Download LLVM releases](https://releases.llvm.org/)

  - Also use the following notes
    - https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf

---

<style scoped>section{ font-size: 25px; }</style>

#### GCC/G++ Complier (MinGW) / Clang-cl (LLVM) (2)

Open a console with "`cmd`" and test the following commands if commands are not recognized then set the system environment variable to add `gcc` and `g++` executable paths to the path variable (add to both system and user path variable)

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

<style scoped>section{ font-size: 25px; }</style>

#### GCC/G++ Complier (MinGW) / Clang-cl (LLVM) (3)

- for `gcc.exe`, `g++.exe` and `gdb.exe`

```bash
C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin
```

- for `clang.exe`, `lldb.exe`

```batch
C:\Program Files\LLVM\bin
```

This folder path changes according to your setup

---

<style scoped>section{ font-size: 25px; }</style>

### VSCode (Install / Compile / Run / Debug) (1)

Download Visual Studio Code from the following link

[Download Visual Studio Code - Mac, Linux, Windows](https://code.visualstudio.com/download)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (2)

In this sample, you will find MinGW and LLVM compiler combinations for C and C++

Create a folder and enter this folder then open this folder with vscode by right click

![alt:"alt" height:350px center](assets/2021-10-22-04-28-24-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (3)

or enter the folder via console

![alt:"alt" height:200px center](assets/2021-10-22-04-29-02-image.png)

write

```batch
code .
```

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (4)

- This will open vscode for the current folder, (.) dot present current folder.
- You will see an empty folder in the right window

![alt:"alt" height:450px center](assets/2021-10-22-04-31-28-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (5)

![alt:"alt" height:450px center](assets/2021-10-22-04-31-46-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (6)

- Create a `hello.c` file and write the following content

```c
#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   return 0;
}
```

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (7)

use `CTRL+SHIFT+B` (you should be on the source code section) to build a file

![alt:"alt" height:450px center](assets/2021-10-22-04-34-04-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (8)

Select `GCC `or `CLANG `for this sample we can use `GCC`

You will see the output generated `Hello.exe``

![alt:"alt" height:450px center](assets/2021-10-22-04-34-55-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (9)

for debugging just put a breakpoint and build again

![alt:"alt" height:450px center](assets/2021-10-22-04-35-31-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (10)

- after building for debug press `CTRL+SHIFT+D` (you should be in the source code section)and in the right window select create `launch.json`

![alt:"alt" height:450px center](assets/2021-10-22-04-36-47-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (11)

- from opening, window select `C++ GDB/LLDB`

![alt:"alt" height:400px center](assets/2021-10-22-04-37-09-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (12)

- from the next opening, menu select `mingw-w64 gcc.exe`

![alt:"alt" height:400px center](assets/2021-10-22-04-37-39-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (13)

this will run the debugger and you will see debug points activated

![alt:"alt" height:400px center](assets/2021-10-22-04-38-34-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (14)

then you can step-by-step debug your code.

the following `task.json` and `launch.json` automatically generated with your selections

![alt:"alt" height:400px center](assets/2021-10-22-04-39-30-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (15)

**launch.json**

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

<style scoped>section{ font-size: 20px; }</style>

#### VSCode (Install / Compile / Run / Debug) (16)

**task.json**

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
      "problemMatcher": ["$gcc"],
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

<style scoped>section{ font-size: 20px; }</style>

#### VSCode (Install / Compile / Run / Debug) (17)

- You can do the same thing for other compilers and C++ source codes. LLVM does not support debugging on vscode now.

for C++ VsCode you can check the following links

- for Windows

  - https://code.visualstudio.com/docs/cpp/config-mingw

- for Linux

  - https://code.visualstudio.com/docs/cpp/config-linux

- for WSL

  - https://code.visualstudio.com/docs/cpp/config-wsl

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (18)

in the launch file if you start debugging with `F5`

(you can select debugger with `CTRL+SHIFT+P` and then write Debug and Selecting Configure Debugger Option)

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (19)

- the following line will be your debugging application path

- if you start debugging with `F5 `in `Hello.c` file this will set `<Hello.c base path>/Hello.exe`

---

<style scoped>section{ font-size: 25px; }</style>

#### VSCode (Install / Compile / Run / Debug) (20)

You should set this correct for both `LLVM `and `GCC` configuration in launch.json

```bash
 "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
```

Also you should set your installed debugger paths

for GCC

```bash
"miDebuggerPath": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",
```

for LLVM

```bash
"miDebuggerPath": "C:\\Program Files\\LLVM\\bin\\lldb.exe",
```

for more details please check the sample source codes.

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (1)

> My Extension List

- Listing Installed Extensions

```bash
PS C:\Users\ugur.coruh\Desktop> code --list-extensions | % { "code --install-extension $_" }
```

Following topic can help you

[How can you export the Visual Studio Code extension list? - Stack Overflow](https://stackoverflow.com/questions/35773299/how-can-you-export-the-visual-studio-code-extension-list)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (2)

```
code --install-extension 2gua.rainbow-brackets
code --install-extension aaron-bond.better-comments
code --install-extension abusaidm.html-snippets
code --install-extension ACharLuk.easy-cpp-projects
code --install-extension chris-noring.node-snippets
code --install-extension cschlosser.doxdocgen
code --install-extension csholmq.excel-to-markdown-table
code --install-extension DaChuiOpenSource.FreeMind
code --install-extension dannysteenman.cloudformation-yaml-snippets
code --install-extension Dart-Code.dart-code
code --install-extension Dart-Code.flutter
code --install-extension digized.umple
code --install-extension DotJoshJohnson.xml
code --install-extension DougFinke.vscode-pandoc
code --install-extension dzhavat.bracket-pair-toggler
code --install-extension esbenp.prettier-vscode
code --install-extension formulahendry.dotnet
code --install-extension franneck94.c-cpp-runner
code --install-extension gcc.
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (3)

```
vscode-plugin-billionbottle
code --install-extension geeklearningio.graphviz-markdown-preview
code --install-extension geyao.html-snippets
code --install-extension GitHub.copilot-nightly
code --install-extension GrapeCity.gc-excelviewer
code --install-extension Ionide.Ionide-fsharp
code --install-extension ionut-botizan.vscode-cypher-ql
code --install-extension ipedrazas.kubernetes-snippets
code --install-extension JakeWilson.vscode-picture
code --install-extension James-Yu.latex-workshop
code --install-extension JasonMejane.base64viewer
code --install-extension jasonnutter.search-node-modules
code --install-extension jebbs.plantuml
code --install-extension jeff-hykin.better-cpp-syntax
code --install-extension Katacoda.vscode
code --install-extension KenDomino.Antlrvsix-vscode
code --install-extension l7ssha.tag-inserter
code --install-extension lolkush.quickstart
code --install-extension marp-team.marp-vscode
code --install-extension mindaro-dev.file-downloader
code --install-extension mindaro.mindaro
code --install-extension ms-azuretools.vscode-docker
code --install-extension MS-CEINTL.vscode-language-pack-tr
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (4)

```
code --install-extension ms-dotnettools.csharp
code --install-extension ms-dotnettools.dotnet-interactive-vscode
code --install-extension ms-dotnettools.vscode-dotnet-pack
code --install-extension ms-dotnettools.vscode-dotnet-runtime
code --install-extension ms-kubernetes-tools.vscode-aks-tools
code --install-extension ms-kubernetes-tools.vscode-kubernetes-tools
code --install-extension ms-python.python
code --install-extension ms-python.vscode-pylance
code --install-extension ms-toolsai.jupyter
code --install-extension ms-toolsai.jupyter-keymap
code --install-extension ms-toolsai.jupyter-renderers
code --install-extension ms-vscode-remote.remote-containers
code --install-extension ms-vscode-remote.remote-ssh
code --install-extension ms-vscode-remote.remote-ssh-edit
code --install-extension ms-vscode-remote.remote-wsl
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (5)

```
code --install-extension ms-vscode.azure-account
code --install-extension ms-vscode.brackets-keybindings
code --install-extension ms-vscode.brackets-pack
code --install-extension ms-vscode.cmake-tools
code --install-extension ms-vscode.cpptools
code --install-extension ms-vscode.cpptools-extension-pack
code --install-extension ms-vscode.cpptools-themes
code --install-extension ms-vscode.live-server
code --install-extension ms-vsliveshare.vsliveshare
code --install-extension oleg-shilo.cs-script
code --install-extension PascalReitermann93.vscode-yaml-sort
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (6)

```
code --install-extension Pivotal.vscode-boot-dev-pack
code --install-extension Pivotal.vscode-concourse
code --install-extension Pivotal.vscode-manifest-yaml
code --install-extension Pivotal.vscode-spring-boot
code --install-extension PKief.material-icon-theme
code --install-extension platformio.platformio-ide
code --install-extension pranaygp.vscode-css-peek
code --install-extension redhat.fabric8-analytics
code --install-extension redhat.java
code --install-extension redhat.vscode-commons
code --install-extension redhat.vscode-xml
code --install-extension redhat.vscode-yaml
code --install-extension ritwickdey.LiveServer
code --install-extension sidthesloth.html5-boilerplate
code --install-extension TaodongWu.ejs-snippets
code --install-extension tht13.python
code --install-extension tomoki1207.pdf
code --install-extension twxs.cmake
code --install-extension vadimcn.vscode-lldb
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Code Extension List (7)

```
code --install-extension VisualStudioExptTeam.intellicode-api-usage-examples
code --install-extension VisualStudioExptTeam.vscodeintellicode
code --install-extension vscjava.vscode-java-debug
code --install-extension vscjava.vscode-java-dependency
code --install-extension vscjava.vscode-java-pack
code --install-extension vscjava.vscode-java-test
code --install-extension vscjava.vscode-maven
code --install-extension vscjava.vscode-spring-boot-dashboard
code --install-extension vscjava.vscode-spring-initializr
code --install-extension walkme.HTML5-extension-pack
code --install-extension webfreak.debug
code --install-extension well-ar.plantuml
code --install-extension wildboar.asn1
code --install-extension Zignd.html-css-class-completion
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (1)

- Download and install `Visual Studio Community Edition`
- Select All Development Environments from Installer.

[Ücretsiz Geliştirici Yazılımları ve Hizmetleri - Visual Studio](https://visualstudio.microsoft.com/tr/free-developer-offers/)

![center height:400px](assets/2022-10-01-13-06-31-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (2)

- After installation open `Visual Studio `2022` from the menu.

![center height:300px](assets/2022-10-01-12-42-08-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (3)

- The application will start...

![center height:300px](assets/2022-10-01-12-42-34-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (4)

- From Opening Window Select `Create a new project`

![bg right height:350px](assets/2022-10-01-12-46-19-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (5)

- There will be several options, you can review them.

- Select `Windows`, `C++`, `Console Application` from Combobox.

- Select `Console Application`

  ![bg right height:450px](assets/2022-10-01-12-46-42-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (6)

- Give a solution and project name.
- Select save location

![bg right height:350px](assets/2022-10-01-12-47-05-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (7)

- You will have C++ basic Hello World application.

![bg right height:350px](assets/2022-10-01-12-47-33-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (8)

- You will have C++ basic Hello World application.

```cpp
// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (9)

- We need to rename the file extension to `c` from `cpp`

![bg right height:350px](assets/2022-10-01-12-47-53-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (10)

- If you compile the source C compiler will be used.

![bg right height:200px](assets/2022-10-01-12-48-08-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (11)

- We need to update our source for `C` as follows

```c
// ConsoleApplication1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(){
    printf("Hello World!\n");
}
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (12)

- We need to update our source for `C` as follows

![bg right height:350px](assets/2022-10-01-12-49-42-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (13)

- Put a breakpoint by clicking the following location. Breakpoints will be stop points for our debugging operations.

![bg right height:350px](assets/2022-10-01-12-50-01-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (14)

- Then select Debug configuration and according to your operating system select x64 or x86 configuration and click `Local Windows Debugger`

![bg right width:650px](assets/2022-10-01-12-50-15-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (15)

- Update your source code as follow

```c
// ConsoleApplication1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int sum(int input1, int input2);

int main(){
    int number = 5;
    printf("Before Increment : %d\n",number);
    number = sum(number, 5);
    printf("After Increment : %d\n", number);
}

int sum(int input1, int input2){
    return input1 + input2;
}
```

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (16)

- Put the following breakpoints and run the debugger. On number, the variable pins the variable to see its value in real-time.

![bg right width:650px](assets/2022-10-01-13-00-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (17)

- Open Debug->Windows->Memory->Memory1 to see value in memory

![bg right width:650px](assets/2022-10-01-13-01-01-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (18)

- In the memory window copy variable name (number) with address operator (&) and then (&number) press enter.

![bg right width:550px](assets/2022-10-01-13-01-29-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (19)

- You can see its value in memory with hexadecimal form (`05 00 00 00`)

![bg right width:550px](assets/2022-10-01-13-01-49-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (20)

- If you change value with pinned control your memory value and your current value will be updated. 20 in hexadecimal 0x14 (integer is 4 bytes length for this reason memory shows `14 00 00 00`)

![center height:150px](assets/2022-10-01-13-02-11-image.png)

![center height:200px](assets/2022-10-01-13-02-27-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (21)

- If you close some windows such as solution explorer, and properties windows you can open them from the View menu.

![bg right height:650px](assets/2022-10-01-13-02-52-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (22)

- Solution and Projects have several configurations for each setup such as Release - x86, Release-x64, Debug- x86, and Debug-x64 you need to configure all of them for your requirements. You can access configurations by right-clicking to project and then selecting properties.

![bg right height:650px](assets/2022-10-01-13-03-15-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (Install / Compile / Run / Debug) (23)

- Project properties has several settings

![center height:400px](assets/2022-10-01-13-03-30-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (1)

![h:100px](https://upload.wikimedia.org/wikipedia/commons/6/69/Notepad%2B%2B_Logo.svg)

- Please download Notepad++ from the following link
  - [Downloads | Notepad&#43;&#43;](https://notepad-plus-plus.org/downloads/)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (2)

Download and install MinGW or LLVM compiler (if you downloded then skip this step)

**MinGW installer (gcc / g++)**

- A complete runtime environment for gcc
  - https://sourceforge.net/projects/mingw-w64/
  - https://sourceforge.net/projects/mingw-w64/files/latest/download
- w64devkit is a portable C and C++ development kit for x64 (and x86) Windows.
  - https://www.mingw-w64.org/downloads/#w64devkit
- Also, see the following notes
  - https://www.hanshq.net/building-gcc.html

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (3)

**LLVM installer (clang)**

- Download
  - https://releases.llvm.org/
- Also, use the following notes
  - https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf
  - https://www.hanshq.net/clang-plugin-example.html

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (4)

Open a console with "`cmd`" and test the following commands if commands are not recognized then set the system environment variable to add `gcc` and `g++` executable paths to the path variable (add to both system and user path variable)

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

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (5)

- Open system environments to update path variable for gcc/g++ and clang

  ![alt:"alt" height:450px center](assets/2021-10-22-03-18-30-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (6)

- Open "Environment Variables"

![alt:"alt" height:450px center](assets/2021-10-22-03-18-54-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (7)

- Select path variable from user section.

![alt:"alt" height:450px center](assets/2021-10-22-03-21-11-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (8)

- Select path variable from system section.
  ![alt:"alt" height:350px center](assets/2021-10-22-03-19-07-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (9)

- Update variables add `MinGW` and `LLVM` to path `gcc.exe` `g++.exe` `clang.exe` will be in bin folders. Then we can run this commands from command line.

![alt:"alt" height:250px center](assets/2021-10-22-03-19-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (9)

- Update variables add `MinGW` and `LLVM` to path `gcc.exe` `g++.exe` `clang.exe` will be in bin folders. Then we can run this commands from command line.

![alt:"alt" height:250px center](assets/2021-10-22-03-21-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (10)

- for `gcc.exe`, `g++.exe` and `gdb.exe`

```bash
C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin
```

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (11)

- for `clang.exe` , `lldb.exe` we will use the following path

```batch
C:\Program Files\LLVM\bin
```

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (12)

- This folder paths changes according to your setup

- Open `NppExec` extension (install from extension manager if not exist)

![alt:"alt" height:450px center](assets/2021-10-22-04-22-24-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (13)

- Write the following commands in the box

```batch
NPP_SAVE // save current file
cd $(CURRENT_DIRECTORY) // go to directory of the current file
gcc  -Wall -Wextra -Wpedantic -std=c++11 -o "$(NAME_PART)" "$(FILE_NAME)"
```

![alt:"alt" height:300px center](assets/2021-10-22-04-23-24-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Notepad++ (Install / Compile ) (14)

- Save the script as `gcc-build` and for more information check the following link

- You can modify or add multiple scripts for another task.

---

<style scoped>section{ font-size: 25px; }</style>

### MSYS2

- Software Distribution and Building Platform for Windows

https://www.msys2.org/

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (1)

- Vim is a command-line editor for programming
- Use the following links to download Vim for Windows
  - https://github.com/vim/vim-win32-installer/releases
  - [download : vim online](https://www.vim.org/download.php)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (2)

- Run setup to install the application on your computer.

![alt:"alt" height:100px center](assets/2022-10-01-15-30-51-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (3)

![alt:"alt" height:350px center](assets/2022-10-01-15-31-02-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (4)

- Installation steps.

![alt:"alt" height:350px center](assets/2022-10-01-15-31-20-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (5)

- Installation steps.

![alt:"alt" height:350px center](assets/2022-10-01-15-31-53-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (6)

- Installation steps.

![alt:"alt" height:350px center](assets/2022-10-01-15-32-12-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (7)

- Installation steps.

![alt:"alt" height:350px center](assets/2022-10-01-15-32-31-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (8)

- Installation steps.

![alt:"alt" height:350px center](assets/2022-10-01-15-32-51-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (9)

- Installation steps.

![alt:"alt" height:350px center](assets/2022-10-01-15-34-40-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (10)

- Generated shortcuts on your desktop

![alt:"alt" height:350px center](assets/2022-10-01-15-34-50-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (11)

- Run `vim hello.c` on your command-line to open a c file with vim editor.

![bg right height:550px center](assets/2022-10-01-15-36-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (12)

- You will have the following editor.
- Use INSERT to change edit options.

![alt:"alt" height:450px center](assets/2022-10-01-15-46-39-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (13)

- Sample source code

```c
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter Name:");
    scanf("%s",name);
    printf("Your name is %s",name);
    return 0;
}
```

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (14)

- Write source code
- Press the ` Esc` button to enter command mode
- Then type `:wq`. It will save the file and exit from Vim
  - w: write
  - q: quit

![alt:"alt" height:300px center](assets/2022-10-01-15-47-51-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (15)

- compile source code with `gcc`
- link the objects and
- run executable

![alt:"alt" height:300px center](assets/2022-10-01-15-50-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (17)

- In the folder, you can find your executable. `hello.exe`

![alt:"alt" height:400px center](assets/2022-10-01-15-50-39-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Vi/Vim (C/C++) for Windows (16)

- compile, link and execute flow will be as follow;

![bg right height:650px center](assets/2022-10-01-15-59-03-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (1)

- Download and install Eclipse IDE from the following link
  - [Eclipse IDE for C/C++ Developers | Eclipse Packages](https://www.eclipse.org/downloads/packages/release/kepler/sr2/eclipse-ide-cc-developers)
- Run Installer
- Select `Eclipse IDE for C/C++ Developers`

![alt:"alt" height:450px center](assets/2022-10-01-19-45-44-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (2)

- Select Java Version and Installation Path

![alt:"alt" height:450px center](assets/2022-10-01-19-48-26-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (3)

- After installation you can LAUNCH eclipse IDE

![alt:"alt" height:450px center](assets/2022-10-01-20-06-25-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (4)

![alt:"alt" height:450px center](assets/2022-10-01-20-06-43-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (5)

- Select a workspace that your project will be saved

![alt:"alt" height:450px center](assets/2022-10-01-20-07-30-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (6)

- You can find your installation under your user folder

![alt:"alt" height:450px center](assets/2022-10-01-20-10-54-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (7)

- You can create shortcut to desktop for your working eclipse version.

![alt:"alt" height:450px center](assets/2022-10-01-20-11-15-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (8)

- File -> New -> Project

![alt:"alt" height:450px center](assets/2022-10-01-20-12-37-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (9)

- Select C/C++ Project

![alt:"alt" height:450px center](assets/2022-10-01-20-13-16-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (10)

- Select C Managed Build, Eclipse CDT will do job for us.

![alt:"alt" height:450px center](assets/2022-10-01-20-14-05-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (11)

- Give project name and select a basic template executable with MinGW GCC.

![alt:"alt" height:450px center](assets/2022-10-01-20-15-03-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (12)

- Configura Basic Settings

![alt:"alt" height:450px center](assets/2022-10-01-20-16-32-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (13)

- There are default Debug and Release configurations you can add your customized configurations from Advanced Settings.

![alt:"alt" height:450px center](assets/2022-10-01-20-17-17-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (14)

- Project settings will be C Select Debug/Release configuration and then Build Application Project->Build All (Ctrl+B)

- HelloWorldC.exe will be generated

```bash
gcc -O0 -g3 -Wall -c -fmessage-length=0 -o "src\\HelloWorldC.o" "..\\src\\HelloWorldC.c"
gcc -o HelloWorldC.exe "src\\HelloWorldC.o"
```

![alt:"alt" height:450px center](assets/2022-10-01-20-20-22-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (15)

- Before build if you want to debug application select debug configuration, put your breakpoints and then Build application again.

- Right click the generated executable Debug As -> Local C/C++ Application

![alt:"alt" height:450px center](assets/2022-10-01-20-23-59-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (16)

- Debugger will start and stop at breakpoint as follow.

![alt:"alt" height:450px center](assets/2022-10-01-20-24-59-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (16)

- Check debug control shortcuts and use them

![alt:"alt" height:250px center](assets/2022-10-01-22-12-12-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (17)

- To watch variables use Expressions and Variables

![alt:"alt" height:450px center](assets/2022-10-01-22-13-26-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (18)

![alt:"alt" height:450px center](assets/2022-10-01-22-13-50-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (19)

- for more visit eclipse webpage

  - [Effective Techniques for Debugging C & C++ | The Eclipse Foundation](https://www.eclipse.org/community/eclipse_newsletter/2017/april/article2.php)

  - [Help - Eclipse IDE](https://rtist.hcldoc.com/help/index.jsp?topic=%2Forg.eclipse.cdt.doc.user%2Fgetting_started%2Fcdt_w_debug.htm)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (20)

- Generate CMAKE project from new Project and Select CMake Project Template

![alt:"alt" height:450px center](assets/2022-10-01-22-30-23-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (21)

- Give project name

![alt:"alt" height:450px center](assets/2022-10-01-22-31-07-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (22)

- This will generate default C++ Hello World project

![alt:"alt" height:450px center](assets/2022-10-01-22-32-02-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (23)

- Build Project

![alt:"alt" height:450px center](assets/2022-10-01-22-32-51-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (24)

- It will give following errors, for missing configurations. This errors are generated by CMAKE

- Then clean and rebuild again.

```tex
Errors occurred during the build.
Errors running builder 'CDT Core Builder' on project 'HelloWorldCmakeC'.
Resource '/HelloWorldCmakeC/build/cmake.debug.win32.x86_64/compile_commands.json' does not exist.
Resource '/HelloWorldCmakeC/build/cmake.debug.win32.x86_64/compile_commands.json' does not exist.
Resource '/HelloWorldCmakeC/build/cmake.debug.win32.x86_64/compile_commands.json' does not exist.
Resource '/HelloWorldCmakeC/build/cmake.debug.win32.x86_64/compile_commands.json' does not exist.
```

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (25)

![alt:"alt" height:450px center](assets/2022-10-01-22-35-40-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (26)

- After this operation first Clean project from Project menu and then Build All again

![alt:"alt" height:450px center](assets/2022-10-01-22-37-44-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (27)

- [Eclipse with CMake project on windows](https://yairgadelov.me/eclipse-with-cmake-project-on-windows/)

- [JV - Science and stuff.](https://jvgomez.github.io/pages/how-to-configure-a-cc-project-with-eclipse-and-cmake.html)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (28)

![alt:"alt" height:450px center](assets/2022-10-01-23-32-24-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Eclipse (C/C++) - Compile Only / Debugging Has Problem (29)

![alt:"alt" height:450px center](assets/2022-10-01-23-35-02-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (1)

- https://netbeans.apache.org/

- [C and C++ Tutorials](https://netbeans.apache.org/kb/docs/cnd/)

![alt:"alt" height:250px center](assets/2022-10-01-23-47-14-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (2)

![alt:"alt" height:450px center](assets/2022-10-01-23-48-04-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (3)

![alt:"alt" height:450px center](assets/2022-10-01-23-48-57-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (4)

![alt:"alt" height:250px center](assets/2022-10-01-23-51-47-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (5)

![alt:"alt" height:450px center](assets/2022-10-01-23-53-17-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (6)

![alt:"alt" height:450px center](assets/2022-10-01-23-24-27-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (7)

![bg right height:550px center](assets/2022-10-01-23-58-10-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Netbeans (C/C++) - Manuel Build/Clean/Run Command Setting Not Good Option for C/C++ Development (8)

![bg right height:550px center](assets/2022-10-01-23-58-26-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Turbo C/C++ (1)

Download [Turbo.C.3.2.zip](files/Turbo.C.3.2.zip)

- [Download Turbo C++ for Windows 7, 8, 8.1, 10 and Windows 11 (32-64 bit) with full/window screen mode and many more extra features](https://developerinsider.co/download-turbo-c-for-windows-7-8-8-1-and-windows-10-32-64-bit-full-screen/)

- [Turbo C++ Shortcuts - C Programming Language Tutorials](https://developerinsider.co/turbo-c-shortcuts/)

![bg right height:550px center](assets/2022-10-02-00-06-27-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Turbo C/C++ (2)

![bg right height:550px center](assets/2022-10-02-00-10-07-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (1)

**CMake** (http://www.cmake.org/) is a program which generates the **Makefiles** used by **Make**.

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (2)

Why use **CMake** ?

- Eases **Make** use
  - but the same way of thinking
  - generate the **Makefile**
- Separate the compilation from the sources
- Multi-platfoms
- Very flexible

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (3)

- Check if the libraries/programs are available on your system
- File generator (**configure_file**)
- Calling programs or scripts (**doxygen**)
- One of the new standards

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (4) (Download and Install)

use the following link for download

[Download | CMake](https://cmake.org/download/)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (5) (WSL and Linux Environment)

[Hello world with CMake](https://lappweb.in2p3.fr/~paubert/ASTERICS_HPC/2-2-100.html)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (6) (Windows Environment)

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

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (7) (Windows Environment)

put main.c and CMakeLists.txt file in sample-scanf folder and from command line

![alt:"alt" height:450px center](assets/2021-11-07-00-42-52-image.png)

run the following cmake command with dot (.) to create solution file for c project

```batch
C:\Users\ugur.coruh\Desktop\sample-scanf>cmake .
```

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (8) (Windows Environment)

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

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (9) (Windows Environment)

also following files are generated

![alt:"alt" height:450px center](assets/2021-11-07-00-46-07-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (10) (Windows Environment)

if we open scanf-sample.sln file we will have automated generated project files

![alt:"alt" height:450px center](assets/2021-11-07-00-47-04-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (11) (Windows Environment)

you can make scanf-sample with startup project with right click and then run on visual studio.

if you want to configure for another build tool you can use Cmake-GUI installed with setup on your computer

![alt:"alt" height:150px center](assets/2021-11-07-00-56-13-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (12) (Windows Environment)

Open GUI and Select _File-> Delete Cache_

![alt:"alt" height:450px center](assets/2021-11-07-00-57-41-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (13) (Windows Environment)

then you can click "Configure" to select build tool

![alt:"alt" height:450px center](assets/2021-11-07-00-59-28-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (14) (Windows Environment)

![alt:"alt" height:400px center](assets/2021-11-07-00-59-39-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Cmake (C++/C) (15) (Windows Environment)

if you click "Configure" twice it will generate the visual studio solution in build folder

for more detailed examples that include also docker and travis-ci sample you can check the following repo

[GitHub - ttroy50/cmake-examples: Useful CMake Examples](https://github.com/ttroy50/cmake-examples)

---

<style scoped>section{ font-size: 25px; }</style>

#### Make (1)

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

<style scoped>section{ font-size: 25px; }</style>

#### Make (2)

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

<style scoped>section{ font-size: 25px; }</style>

#### Make (3)

**compile.bat**

```batch
make all .
```

will create hello.exe

check hello-make sample

---

<style scoped>section{ font-size: 25px; }</style>

#### Make (4)

![alt:"alt" height:450px center](assets/2021-11-07-01-45-59-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

# JAVA Environment and Development

![alt:"alt" height:450px center](assets/2022-10-02-00-17-30-image.png)

---

### JDK and JRE Setup (1)

![alt:"alt" height:450px center](assets/2022-10-02-00-20-45-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### JDK and JRE Setup (2)

- **JDK** (Java Development Kit) is a Kit that provides the environment to **develop and execute(run)** the Java program. JDK is a kit(or package) that includes two things

  - Development Tools(to provide an environment to develop your java programs)
  - JRE (to execute your java program).

- **JRE** (Java Runtime Environment) is an installation package that provides an environment to **only run(not develop)** the java program(or application)onto your machine. JRE is only used by those who only want to run Java programs that are end-users of your system.

- [**JVM** (**Java Virtual Machine)**](https://www.geeksforgeeks.org/jvm-works-jvm-architecture/) is a very important part of both JDK and JRE because it is contained or inbuilt in both. Whatever Java program you run using JRE or JDK goes into JVM and JVM is responsible for executing the java program line by line, hence it is also known as an [**i\*\*\***nterpreter\*\*\*](https://www.geeksforgeeks.org/compiler-vs-interpreter-2/)**.**

---

- [Difference between JDK, JRE, JVM - TutorialAndExample](https://www.tutorialandexample.com/difference-between-jdk-jre-jvm)

![alt:"alt" height:450px center](assets/2022-10-02-00-22-07-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### System Environments and Paths for Java (1)

![alt:"alt" height:450px center](assets/2022-10-02-01-39-19-image.png)

---

### System Environments and Paths for Java (2)

- Select path variable (JDK should be set there)

![alt:"alt" height:450px center](assets/2022-10-02-01-40-11-image.png)

---

### System Environments and Paths for Java (3)

- JAVA_HOME also should be set

![alt:"alt" height:450px center](assets/2022-10-02-01-41-24-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (1)

- Open New Project -> Java Project

![alt:"alt" height:450px center](assets/2022-10-02-01-43-53-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (2)

![alt:"alt" height:450px center](assets/2022-10-02-01-44-10-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (3)

![alt:"alt" height:450px center](assets/2022-10-02-01-44-34-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (4)

![alt:"alt" height:450px center](assets/2022-10-02-01-45-02-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (5)

![alt:"alt" height:450px center](assets/2022-10-02-01-45-23-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (6)

Update code and run

![alt:"alt" height:100px center](assets/2022-10-02-01-46-48-image.png)

```java
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.ucoruh.mavenproject1;

/**
 *
 * @author ugur.coruh
 */
public class NewClass {

static                  //static block
{
    System.out.println("Static block");
}

public static void main(String args[])  //static method
{
    System.out.println("Static method");
}

}

```

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (7)

![alt:"alt" height:450px center](assets/2022-10-02-01-47-00-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (8)

![alt:"alt" height:450px center](assets/2022-10-02-01-49-33-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (9)

![alt:"alt" height:450px center](assets/2022-10-02-01-49-54-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Netbeans (Java) (10)

![alt:"alt" height:450px center](assets/2022-10-02-01-50-23-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (1)

- Select File -> New Project

![alt:"alt" height:450px center](assets/2022-10-02-02-19-26-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (2)

![alt:"alt" height:450px center](assets/2022-10-02-02-21-28-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (3)

![alt:"alt" height:450px center](assets/2022-10-02-02-22-05-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (4)

![alt:"alt" height:450px center](assets/2022-10-02-02-23-18-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (5)

![alt:"alt" height:450px center](assets/2022-10-02-02-23-52-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (6)

- Update source

```java
package ucoruh;

public class HelloClass {

	static {
		System.out.println("Static Block");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	    System.out.println("Static Method");

	}

}
```

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (7)

![alt:"alt" height:450px center](assets/2022-10-02-02-27-15-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Eclipse (Java) (8)

![alt:"alt" height:450px center](assets/2022-10-02-02-28-26-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Intellij Idea (Jet Brains) (Java)

- [Download IntelliJ IDEA: The Capable & Ergonomic Java IDE by JetBrains](https://www.jetbrains.com/idea/download/#section=windows)

  - Select Community Version or Student Ultimate Version

![alt:"alt" height:450px center](assets/2022-10-02-02-29-45-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### VSCode (Java)

- Java Extension Run&Debug Java Files

![alt:"alt" height:450px center](assets/2022-10-02-02-34-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Notepad++ (Java)

- [How to Compile and Run Java Programs Using Notepad++](https://www.wikihow.com/Compile-and-Run-Java-Program-by-Notepad)

---

<style scoped>section{ font-size: 25px; }</style>

### Cmake (Java)

- [UseJava &mdash; CMake 3.24.2 Documentation](https://cmake.org/cmake/help/latest/module/UseJava.html)

- [GitHub - ptitpoulpe/cmake-swig-java-example: An example of combining cmake, swig and java](https://github.com/ptitpoulpe/cmake-swig-java-example)

---

<style scoped>section{ font-size: 25px; }</style>

# C# Environment and Development

---

<style scoped>section{ font-size: 25px; }</style>

### Visual Studio Community Edition (C#)

//TODO//

![alt:"alt" height:200px center](assets/todo.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Notepad++ (C#)

- This use command-line utilities for csharp, nppexec should be configured for this utility.

- [Compiling/Executing a C# Source File in Command Prompt - Stack Overflow](https://stackoverflow.com/questions/553143/compiling-executing-a-c-sharp-source-file-in-command-prompt)

```bash
c:\windows\Microsoft.NET\Framework\v3.5\
```

```bash
c:\windows\Microsoft.NET\Framework\v3.5\bin\csc.exe
            /t:exe /out:MyApplication.exe MyApplication.cs  ...
```

---

<style scoped>section{ font-size: 25px; }</style>

### Cmake (C#)

- [GitHub - crud89/DotNetWithCMake: Your swiss army knife for creating .NET assemblies with CMake and integrating unmanaged code.](https://github.com/crud89/DotNetWithCMake)

---

<style scoped>section{ font-size: 25px; }</style>

### Common Tools and Platforms

---

<style scoped>section{ font-size: 25px; }</style>

### Fatih Kalem

![height:150px](assets/2022-01-29-00-28-55-image.png)

https://cdnvideo.eba.gov.tr/fatihkalem/fatihkalem_portable.zip

https://cdnvideo.eba.gov.tr/fatihkalem/fatihkalem_setup.exe

![bg right height:350px](https://i.ytimg.com/vi/_FCjuWwOUDw/maxresdefault.jpg)

---

<style scoped>section{ font-size: 25px; }</style>

### Notepad++ (Notepad for Source Code)

[Downloads | Notepad&#43;&#43;](https://notepad-plus-plus.org/downloads/)

![bg right height:450px](assets/2022-01-29-00-29-36-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### HxD (Hex Editor)

![height:100px](assets/2022-01-29-00-29-51-image.png)

[HxD - Freeware Hex Editor and Disk Editor | mh-nexus](https://mh-nexus.de/en/hxd/)

![bg right height:450px](assets/2022-01-29-00-30-05-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### MarktextApp (Markdown Syntax Editor)

![height:100px](assets/2022-01-29-00-30-18-image.png)

- https://marktext.app/
- https://github.com/marktext/marktext/releases
- Download latest version
  - https://github.com/marktext/marktext/releases/tag/v0.17.1

![bg right height:450px](assets/2022-01-29-00-30-30-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Cygwin (Linux environment for Windows)

![height:100px](assets/2022-01-29-00-30-42-image.png)

- https://www.cygwin.com/

![bg right height:450px](assets/2022-01-29-00-30-53-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Dependency Walker (32-bit or 64-bit Windows module dependency checker)

![height:100px](assets/2022-01-29-00-31-05-image.png)

- https://www.dependencywalker.com/

![bg right height:450px](assets/2022-01-29-00-31-16-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Doxygen (Code Documentation)

![height:100px](assets/2022-01-29-00-31-27-image.png)

[Doxygen: Doxygen](https://www.doxygen.nl/index.html)

![bg right height:450px](assets/2022-01-29-00-31-38-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Sonarlint (Code Quality and Code Security Extension)

![height:100px](assets/2022-01-29-00-31-50-image.png)

https://www.sonarlint.org/

---

<style scoped>section{ font-size: 25px; }</style>

### Codepen.io (online code sharing)

![height:100px](assets/2022-01-29-00-32-40-image.png)

- https://codepen.io/

- CodePen is a social development environment. At its heart, it allows you to write code in the browser, and see the results of it as you build.

- A useful and liberating online code editor for developers of any skill, and particularly empowering for people learning to code. We focus primarily on front-end languages like HTML, CSS, JavaScript, and preprocessing syntaxes that turn into those things

![bg right height:450px](assets/2022-01-29-00-32-49-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Codepen.io (online code sharing)

- Credit Card Sample on Codepen
  - https://codepen.io/quinlo/pen/YONMEa
- Checkout trends https://codepen.io/trending

---

<style scoped>section{ font-size: 25px; }</style>

### Codeshare.io (real-time code sharing)

![height:100px](assets/2022-01-29-00-33-03-image.png)

- https://codeshare.io/

- Share Code in Real-time with Developers, An online code editor for interviews, troubleshooting, teaching & more…

![bg right height:450px](assets/2022-01-29-00-33-17-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Codebeautify.org (online data conversion tools)

![height:100px](assets/2022-01-29-00-33-32-image.png)

- Has several tools for developers (Code Formatter, JSON Beautifier, XML Viewer, Hex Converters and more...)
- https://codebeautify.org/

---

<style scoped>section{ font-size: 25px; }</style>

### AsciiFlow.com (ASCII drawing tool)

- Asciflow provides ascii based drawings that you can copy directly to textfiles and source codes. Visit the following link

  - https://asciiflow.com/

![](assets/2022-10-02-00-24-58-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Freemind (opensource mindmap application)

- Freemind is open source java based desktop mindmap application. Can export files to several formats

  - [Main Page - FreeMind](https://freemind.sourceforge.net/wiki/index.php/Main_Page)

![alt:"alt" height:250px center](assets/2022-10-02-00-27-00-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

#### Mockup Designers

- Mockflow

  - [Signup - MockFlow](https://mockflow.com/signup/)

- Wireflow

  - https://wireflow.co/

---

<style scoped>section{ font-size: 25px; }</style>

### PlantUML (software designer)

- Text based designer for software engineers

  - https://plantuml.com/

- ![PlantUML Web Server](http://www.plantuml.com/plantuml/svg/JP4v3iCW44NxEGKNI16lKeh8MUj4oWKmfa1om86XyEs36JiP2dZwJupueWieFSRt25CwZJAJj2WUZ6KGT-T0AdHUq3en9hs7taKxI3ylsPan-GAKi-ZTcEzS69ClGLiqEDFC6sFo5GmIPI-3Nh8hO_9rcZ-EMg5nDgJvVoRVm2VggDStFncJRo5jOdVCNSH1l9oWmYmlAD-ACbEIMIioKP6WRYolATywCTDietuDc6opoqsWqtPOlkqB)

- Also visit course notes that related to plantuml [CE204 Object-Oriented Programming - RTEU C204 Object Oriented Programming Course Notes](https://ucoruh.github.io/ce204-object-oriented-programming/week-5/ce204-week-5/)

---

<style scoped>section{ font-size: 25px; }</style>

### Drawio (drawing tool)

- Online and Offline Drawing Tool

  - https://app.diagrams.net/

- Offline Installer

  - [Releases · jgraph/drawio-desktop · GitHub](https://github.com/jgraph/drawio-desktop/releases/)

![alt:"alt" height:350px center](assets/2022-10-02-00-40-33-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Putty (Remote Connection)

- Commonly use for SSH connection

![alt:"alt" height:450px center](assets/2022-10-02-00-43-16-image.png)

---

- We can run a SSH server with MobaXterm and can connect to same computer with Putty.

![alt:"alt" height:450px center](assets/2022-10-02-00-44-39-image.png)

---

![alt:"alt" height:450px center](assets/2022-10-02-00-45-41-image.png)

---

![alt:"alt" height:450px center](assets/2022-10-02-00-46-26-image.png)

---

## Download file over SSH Protocol

- [How to Download and Upload Files over SSH &ndash; TecAdmin](https://tecadmin.net/download-file-using-ssh/)

Here are some useful examples for downloading files from the remote system over SSH protocol.

- This will connect to example.com server with user “**username**” and copy the **/backup/file.zip** file to local system directory **/local/dir**. To use theis command replace the values as per your environment.

  ```
  scp username@example.com:/backup/file.zip /local/dir
  ```

- If the SSH is running on a non-standard port, You can specify the port using `-P` option with SCP command.

  ```
  scp -P 2222 username@example.com:/backup/file.zip /local/dir
  ```

- If your remote server required a private key to connect server, You can use `-i` followed by a private key file path to connect your server using the SCP command. This can be helpful for AWS servers.

  ```
  scp -i private_key.pem username@example.com:/backup/file.zip /local/dir
  ```

---

## Upload file using SSH

You can also upload files to the remote server using SSH protocol using the SCP command. Use the following example command for uploading files to the SSH server.

```
scp file.zip username@example.com:/remote/dir
```

Similarity you can use **-P** switch to define port of the SSH server and **-i** to define private key for the user authentication.

---

- Also you can use SSH tunnels for remote code development

  - [Developing on Remote Machines using SSH and Visual Studio Code](https://code.visualstudio.com/docs/remote/ssh)

  - [Visual Studio Code Server](https://code.visualstudio.com/docs/remote/vscode-server)

---

---

<style scoped>section{ font-size: 25px; }</style>

### MobaXterm (Remote Connection)

- Multip Purpose Remote Connection Toolkit

![alt:"alt" height:450px center](assets/2022-10-02-00-54-41-image.png)

---

![alt:"alt" height:450px center](assets/2022-10-02-00-55-08-image.png)

---

![alt:"alt" height:450px center](assets/2022-10-02-00-55-36-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Teamviewer (Remote Connection)

- Remote connection tool

  - [TeamViewer – Uzaktan Destek, Uzaktan Erişim, Hizmet Masası, Çevrimiçi İşbirliği ve Toplantılar](https://www.teamviewer.com/tr/)

![](assets/2022-10-02-00-56-35-image.png)

---

### AnyDesk

- Remote connection tool

  - [The Fast Remote Desktop Application – AnyDesk](https://anydesk.com/en)

![alt:"alt" height:450px center](assets/2022-10-02-00-58-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Paletton.com and Colorhunt.co (Color Chooser)

- Generates color pallettes and sample usages

  - [Paletton - The Color Scheme Designer](https://paletton.com/#uid=1000u0kllllaFw0g0qFqFg0w0aF)

  - https://colorhunt.co/

  - Also check [Colors Tutorial](https://www.w3schools.com/colors/)

![alt:"alt" height:450px center](assets/2022-10-02-01-00-20-image.png)

---

![alt:"alt" height:450px center](assets/2022-10-02-01-00-37-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Understand (Static Code Analysis)

- https://emenda.com/scitools-understand/

![alt:"alt" height:450px center](https://emenda.com/wp-content/uploads/2020/01/understand_screen_shot.png)

---

![alt:"alt" height:450px center](assets/2022-10-02-01-02-52-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### JD Project (Java Decompiler)

- Java Decompiler for Jar and Class Files, If code is not obfuscated it recover source code from compiled files. Just drag and drop files to GUI

  - http://java-decompiler.github.io/

  - You can use it standalone app or with eclipse

![alt:"alt" height:450px center](assets/2022-10-02-01-04-44-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Cutter (Multi-Platform Reverse Engineering Tool)

- Cutter's goal is to be an advanced FREE and open-source reverse-engineering platform while keeping the user experience at mind. Cutter is created by reverse engineers for reverse engineers.

- https://cutter.re/

![alt:"alt" height:450px center](assets/2022-10-02-01-07-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### IDA Pro / Freeware (Native Reverse Engineering Tool)

- IDA Pro as a disassembler is capable of creating maps of their execution to show the binary instructions that are actually executed by the processor in a symbolic representation (assembly language). Advanced techniques have been implemented into IDA Pro so that it can generate assembly language source code from machine-executable code and make this complex code more human-readable.

---

<style scoped>section{ font-size: 25px; }</style>

### IDA Pro / Freeware (Native Reverse Engineering Tool)

- [Hex Rays - State-of-the-art binary code analysis solutions](https://hex-rays.com/ida-pro/)

![alt:"alt" height:450px center](assets/2022-10-02-01-08-27-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### IDA Pro / Freeware (Native Reverse Engineering Tool)

![alt:"alt" height:450px center](assets/2022-10-02-01-09-23-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Code Visualization (Python, C , C++ , Java)

- This coding tutor tool helps you learn Python, JavaScript, C, C++, and Java by visualizing code execution.

  - https://pythontutor.com/

![alt:"alt" height:450px center](assets/2022-10-02-01-10-14-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Assembly of C Code

- Multilanguage supported. Convert source code to assembly codes

  - https://godbolt.org/

![alt:"alt" height:450px center](assets/2022-10-02-01-13-52-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Mobile Device Screen Sharing for Demo

- Show USB or Wifi connected Mobile Device Screen on PC and Provide Controls

  - [GitHub - Genymobile/scrcpy: Display and control your Android device](https://github.com/Genymobile/scrcpy)

  - Run `scrcpy` for single mobile phone.

  - [Open Source Project - Scrcpy now works wirelessly](https://www.genymotion.com/blog/open-source-project-scrcpy-now-works-wirelessly/)

---

<style scoped>section{ font-size: 25px; }</style>

### Travis-CI

- Travis-CI is a continues integration platform

- Travis-CI free option removed for this reason, its not in our scope.

- It uses Travis.yml files for actions.

---

<style scoped>section{ font-size: 25px; }</style>

### AppVeyor

- Another CI platform it has free option for public builds.

  - https://www.appveyor.com

  - [GitHub - Kimserey/hello-world-nuget](https://github.com/Kimserey/hello-world-nuget)

  - [hello-world-nuget/appveyor.yml at master · Kimserey/hello-world-nuget · GitHub](https://github.com/Kimserey/hello-world-nuget/blob/master/appveyor.yml)

---

<style scoped>section{ font-size: 25px; }</style>

### Jenkins

- Self-hosted solution for CI operations, Has integration with Github and several platforms.

  - https://www.jenkins.io/

  - https://www.jenkins.io/doc/pipeline/tour/hello-world/

![alt:"alt" height:350px center](assets/2022-10-01-16-23-09-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Jenkins

![alt:"alt" height:450px center](assets/2022-10-01-16-24-20-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Jenkins

- https://www.jenkins.io/solutions/github/

![bg right height:650px center](https://www.jenkins.io/images/solution-images/jenkins-github-oauth-enable.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Vagrant

- Vagrant is a tool for building and managing virtual machine environments in a single workflow. With an easy-to-use workflow and focus on automation, Vagrant lowers development environment setup time, increases production parity, and makes the "works on my machine" excuse a relic of the past.

  - https://www.vagrantup.com/

- Setup Development Environment with Vagrant

  - [Setting Up Development Environment Using Vagrant - Edureka](https://www.edureka.co/blog/development-environment-using-vagrant/)

  - [development-environment/Vagrantfile at master · gantsign/development-environment · GitHub](https://github.com/gantsign/development-environment/blob/master/Vagrantfile)

---

<style scoped>section{ font-size: 25px; }</style>

### Docker / Docker Compose / Kubernetes (1)

- Docker takes away repetitive, mundane configuration tasks and is used throughout the development lifecycle for fast, easy and portable application development – desktop and cloud.

  - https://www.youtube.com/watch?v=nBwJm0onzeo&ab_channel=GaryExplains Dockerfile
  - https://devopedia.org/docker

- DockerHub

- Docker Compose Yaml

- Dockerrun.aws.json (AWS)

---

<style scoped>section{ font-size: 25px; }</style>

### Docker / Docker Compose / Kubernetes (2)

![alt:"alt" height:450px center](assets/2022-10-01-16-43-40-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Docker / Docker Compose / Kubernetes (3)

![alt:"alt" height:450px center](assets/2022-10-01-16-44-14-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Docker / Docker Compose / Kubernetes (4)

![alt:"alt" height:450px center](assets/2022-10-01-16-44-33-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Docker / Docker Compose / Kubernetes (5)

![alt:"alt" height:450px center](assets/2022-10-01-16-45-31-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Docker / Docker Compose / Kubernetes (6)

![alt:"alt" height:450px center](assets/2022-10-01-16-46-03-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Nuget Packages (1)

- https://www.nuget.org/packages

- [What is NuGet and what does it do? | Microsoft Learn](https://learn.microsoft.com/en-us/nuget/what-is-nuget)

![alt:"alt" height:450px center](assets/2022-10-01-16-17-36-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### NuGet Tools (2)

![alt:"alt" height:450px center](assets/2022-10-01-16-18-21-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

## Managing dependencies (3)

![alt:"alt" height:450px center](assets/2022-10-01-16-18-57-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

## Tracking references and restoring packages (4)

![alt:"alt" height:450px center](assets/2022-10-01-16-19-27-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### SCV Cryptomanager

- SCV Crypto Manager has several tools for cryptographic operations.
  - https://cryptomanager.com/download.php

![alt:"alt" height:450px center](assets/2022-10-01-16-00-44-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Addario CryptoBench

- CryptoBench can be used for hash and symmetric asymmetric encryption-decryption operations.
  - [CryptoBench Download Page](http://www.addario.org/cryptobench/)
  - http://www.addario.org/files/CryptoBench%20v1.0.1.zip

![alt:"alt" height:450px center](assets/2022-10-01-16-02-27-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Raymond's MD5 & SHA Checksum Utility

- Hash Calculation Utility

- [MD5 &amp; SHA Checksum Utility | Raymond's WordPress](https://raylin.wordpress.com/downloads/md5-sha-1-checksum-utility/)

![alt:"alt" height:450px center](assets/2022-10-01-16-04-16-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### SlavaSoft HashCalc

- [SlavaSoft HashCalc - Hash, CRC, and HMAC Calculator](https://www.slavasoft.com/hashcalc/)

![alt:"alt" height:450px center](assets/2022-10-01-16-05-15-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Portable PGP

- Portable PGP uses for the generation of PGP keys to transfer files securely via e-mail or other channels. You can encrypt or sign your documents with this tool then the receiver can open or verify your e-mail.

- https://ppgp.sourceforge.net/

![alt:"alt" height:450px center](assets/2022-10-01-16-13-53-image.png)

---

<style scoped>section{ font-size: 25px; }</style>

### Online Programming Envoriments

- Hackerrank

  - https://www.hackerrank.com/

- CS50 Sandbox

  - https://sandbox.cs50.io/

- Programiz C Online Complier

  - [Online C Compiler](https://www.programiz.com/c-programming/online-compiler/)

---

$$
End-Of-Week-2
$$
