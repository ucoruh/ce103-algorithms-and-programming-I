rem SET GRAPHVIZ_DOT="C:\Program Files (x86)\Graphviz2.38\bin\dot.exe"
java -DPLANTUML_LIMIT_SIZE=8192 -jar "plantuml.jar" -svg -v "./**.(uml)"
