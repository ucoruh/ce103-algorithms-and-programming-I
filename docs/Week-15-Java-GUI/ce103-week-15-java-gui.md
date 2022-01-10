---
marp: true
theme: default
_class: lead
paginate: true
backgroundColor: #fff
backgroundImage: url('https://marp.app/assets/hero-background.svg')
header: 'CE103 Algorithms and Programming I'
footer: '![height:50px](http://erdogan.edu.tr/Images/Uploads/MyContents/L_379-20170718142719217230.jpg) RTEU CE103 Week-15'
title: "CE103 Algorithms and Programming I"
author: "Author: Asst. Prof. Dr. Uğur CORUH"
date:
subtitle: "Java GUI Programming"
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

## Week-15

#### Fall Semester, 2021-2022

Download [DOC](ce103-week-15-java-gui.md_doc.pdf), [SLIDE](ce103-week-15-java-gui.md_slide.pdf), [PPTX](ce103-week-15-java-gui.md_slide.pptx)

<iframe width=700, height=500 frameBorder=0 src="../ce103-week-15-java-gui.md_slide.html"></iframe>

---

<!-- paginate: true -->

## Java GUI Programming

## JavaFX GUI Programming

### 1-Install Gluon Scene Builder

Download and Install Gluon Scene Builder from URL

[Scene Builder - Gluon](https://gluonhq.com/products/scene-builder/)

We will use gluon scene builder as an external designer for NetBeans, Eclipse, and IntelliJ idea tools.

![](assets/2022-01-11-01-01-20-image.png)

![](assets/2022-01-11-01-05-05-image.png)

![](assets/2022-01-11-01-05-35-image.png)

you can save this design as an FXML file from File->Save As

### 2-Install Apache Netbeans

Download and install apache Netbeans

https://netbeans.apache.org/

![](assets/2022-01-11-00-53-55-image.png)



![](assets/2022-01-11-01-19-20-image.png)

![](assets/2022-01-11-01-20-27-image.png)

![](assets/2022-01-11-01-20-44-image.png)

![](assets/2022-01-11-01-21-41-image.png)

### 3- Configure JavaFX Scene Builder for Apache Netbeans

Open Tools->Options->Java->JavaFX

![](assets/2022-01-11-01-32-07-image.png)

![](assets/2022-01-11-01-32-45-image.png)

Select builder home

![](assets/2022-01-11-01-35-48-image.png)



![](assets/2022-01-11-01-35-24-image.png)

you can find old integration documentation here

[Using JavaFX Scene Builder with Java IDEs: Using Scene Builder with NetBeans IDE | JavaFX 2 Tutorials and Documentation](https://docs.oracle.com/javafx/scenebuilder/1/use_java_ides/sb-with-nb.htm) 

### 4-Create First Application

Select File->New Project

![](assets/2022-01-11-01-36-58-image.png)

Select Java With Maven Types

FXML JavaFX Maven Archetype (Gluon)

![](assets/2022-01-11-01-37-56-image.png)

Set project properties

![](assets/2022-01-11-01-38-24-image.png)

Open Project Resources and Click FXML files to run Scene Builder

![](assets/2022-01-11-01-39-30-image.png)

![](assets/2022-01-11-01-40-34-image.png)

In designer properties tab will show control properties, code tab will show action bindings

![](assets/2022-01-11-01-42-14-image.png)

Then you can run applications from Netbeans.

![](assets/2022-01-11-01-45-21-image.png)

for introduction level information please check the following examples

[JavaFX Simple Calculator - Design and Code - YouTube](https://www.youtube.com/watch?v=oWk9fwRgV_k&ab_channel=qBit)

[JavaFX Library Management System Development #0: Introduction - YouTube](https://www.youtube.com/watch?v=9d3X8eBov1M&ab_channel=GenuineCoder)

for more information about JavaFX please check the following 

[JavaFX Tutorial - javatpoint](https://www.javatpoint.com/javafx-tutorial)



## Java Swing GUI Programming

Select File->New Project -> Java with Maven -> Java Application

![](assets/2022-01-11-01-57-55-image.png)

Configure Project

![](assets/2022-01-11-01-58-42-image.png)

Open project and select package then select right-click -> New -> JFrame Form



![](assets/2022-01-11-01-59-09-image.png)

Give a name to your frame

![](assets/2022-01-11-01-59-59-image.png)

Swing GUI Builder is integrated with Netbeans

![](assets/2022-01-11-02-00-41-image.png)

Drag-and-drop controls to panel from the palette 

![](assets/2022-01-11-02-01-30-image.png)

And from the events tab, add custom actions.



![](assets/2022-01-11-02-02-50-image.png)

you can configure control properties from the properties screen

![](assets/2022-01-11-02-03-19-image.png)

We can add simple events such as when the moclickscked to button write text on the text field

"Hello World"

![](assets/2022-01-11-02-04-14-image.png)

When you run application, you will see the following screen

![](assets/2022-01-11-02-05-25-image.png)

### References

...



..

---