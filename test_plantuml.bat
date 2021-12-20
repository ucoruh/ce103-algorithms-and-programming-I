rem SET GRAPHVIZ_DOT="C:\Program Files (x86)\Graphviz2.38\bin\dot.exe"
REM java -DPLANTUML_LIMIT_SIZE=8192 -jar "plantuml.jar" -v "test.dot"
java -jar "plantuml.jar" -v -testdot
pause
