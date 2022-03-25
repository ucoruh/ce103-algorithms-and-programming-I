@echo off
@setlocal enableextensions
@cd /d "%~dp0"

for %%# in (*.en.md) do set  "file_name=%%~nx#"

echo file found "%file_name%"
Powershell.exe marp %file_name% --html --pdf -o %file_name%_slide.pdf --allow-local-files
Powershell.exe marp %file_name% --html -o %file_name%_slide.html --allow-local-files
Powershell.exe marp %file_name% --pptx -o %file_name%_slide.pptx --allow-local-files
rem call Powershell.exe pandoc %file_name% --pdf-engine=xelatex -V colorlinks -V urlcolor=NavyBlue -V toccolor=Red --toc -N -o %file_name%_doc.pdf
Powershell.exe pandoc %file_name% --pdf-engine=xelatex -f markdown-implicit_figures -V colorlinks -V urlcolor=NavyBlue -V toccolor=Red --toc -N -o %file_name%_doc.pdf
Powershell.exe pandoc -o %file_name%_word.docx -f markdown -t docx %file_name%
Powershell.exe pandoc -o %file_name%_word.pptx -f markdown -t pptx %file_name% 

for %%# in (*.tr.md) do set  "file_name=%%~nx#"

echo file found "%file_name%"
Powershell.exe marp %file_name% --html --pdf -o %file_name%_slide.pdf --allow-local-files
Powershell.exe marp %file_name% --html -o %file_name%_slide.html --allow-local-files
Powershell.exe marp %file_name% --pptx -o %file_name%_slide.pptx --allow-local-files
rem call Powershell.exe pandoc %file_name% --pdf-engine=xelatex -V colorlinks -V urlcolor=NavyBlue -V toccolor=Red --toc -N -o %file_name%_doc.pdf
Powershell.exe pandoc %file_name% --pdf-engine=xelatex -f markdown-implicit_figures -V colorlinks -V urlcolor=NavyBlue -V toccolor=Red --toc -N -o %file_name%_doc.pdf
Powershell.exe pandoc -o %file_name%_word.docx -f markdown -t docx %file_name%
Powershell.exe pandoc -o %file_name%_word.pptx -f markdown -t pptx %file_name% 

pause
