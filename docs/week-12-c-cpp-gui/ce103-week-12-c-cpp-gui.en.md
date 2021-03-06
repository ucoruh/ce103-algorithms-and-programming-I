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
header: 'CE103 Algorithms and Programming I'
footer: '![height:50px](http://erdogan.edu.tr/Images/Uploads/MyContents/L_379-20170718142719217230.jpg) RTEU CE103 Week-12'
title: "CE103 Algorithms and Programming I"
author: "Author: Asst. Prof. Dr. Uğur CORUH"
date:
subtitle: "C/Cpp GUI Programming"
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
math: katex
---

<!-- _backgroundColor: aquq -->

<!-- _color: orange -->

<!-- paginate: false -->

# CE103 Algorithms and Programming I

# Week-12 (C/Cpp GUI Programming)

#### Fall Semester, 2021-2022

Download [DOC](ce103-week-12-c-cpp-gui.en.md_doc.pdf), [SLIDE](ce103-week-12-c-cpp-gui.en.md_slide.pdf), [PPTX](ce103-week-12-c-cpp-gui.en.md_slide.pptx)

<iframe width=700, height=500 frameBorder=0 src="../ce103-week-12-c-cpp-gui.en.md_slide.html"></iframe>

---

<!-- paginate: true -->

# C/Cpp GUI Programming

The Microsoft Foundation Class

[MFC Tutorial](https://www.tutorialspoint.com/mfc/index.htm)

[Visual C++ / MFC Calculator 3 - YouTube](https://www.youtube.com/watch?v=CgLLSi9aC4I&ab_channel=PekkaK.)

[MFC C++ : My videos source code download available now to members - YouTube](https://www.youtube.com/watch?v=nmR1ZfYIZDA&t=0s&ab_channel=PekkaK.)

[The Windows GUI interface programming using Microsoft Foundation Classes (MFC) with Visual C++ and .Net hands-on approach tutorials](https://www.tenouk.com/cplusplusnmfc.html)

[Module 1: Using Visual C++ 6.0, .Net and Windows MFC Graphic User Interface (GUI) programming hands-on tutorial-Module1](https://www.tenouk.com/visualcplusmfc/visualcplusmfc1.html)

![The Visual C++ application build process](https://www.tenouk.com/visualcplusmfc/visualcplusmfc1_files/image002.png)

![Visual C++ 6.0 windows with main components displayed](https://www.tenouk.com/visualcplusmfc/visualcplusmfc1_files/image003.png)

![Visual C++ ResourceView](https://www.tenouk.com/visualcplusmfc/visualcplusmfc1_files/image004.png)

GTK 4 

https://www.msys2.org/

https://www.msys2.org/

[Programming with gtkmm 4](https://developer-old.gnome.org/gtkmm-tutorial/stable/index.html) 

[Build and run GTK 4 applications with Visual Studio](https://www.collabora.com/news-and-blog/blog/2021/03/18/build-and-run-gtk-4-applications-with-visual-studio/)

https://www.gtk.org/

[The Meson Build system](https://mesonbuild.com/index.html#features) 

[The GTK Project - A free and open-source cross-platform widget toolkit](https://www.gtk.org/docs/architecture/)

```c
// Include gtk
#include <gtk/gtk.h>

static void on_activate (GtkApplication *app) {
  // Create a new window
  GtkWidget *window = gtk_application_window_new (app);
  // Create a new button
  GtkWidget *button = gtk_button_new_with_label ("Hello, World!");
  // When the button is clicked, close the window passed as an argument
  g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_window_close), window);
  gtk_window_set_child (GTK_WINDOW (window), button);
  gtk_window_present (GTK_WINDOW (window));
}

int main (int argc, char *argv[]) {
  // Create a new application
  GtkApplication *app = gtk_application_new ("com.example.GtkApplication",
                                             G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (on_activate), NULL);
  return g_application_run (G_APPLICATION (app), argc, argv);
}
```

---

[eBooks by Tags | RIP Tutorial](https://riptutorial.com/ebook)

---
