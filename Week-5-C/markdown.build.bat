@echo off
@setlocal enableextensions
@cd /d "%~dp0"
for %%# in (*.md) do set "file_name=%%~nx#"
echo file found %file_name%
Powershell.exe marp %file_name% --pdf -o %file_name%_slide.pdf --allow-local-files
Powershell.exe marp %file_name% -o %file_name%_slide.html --allow-local-files
Powershell.exe marp %file_name% --pptx -o %file_name%_slide.pptx --allow-local-files
Powershell.exe pandoc %file_name% --pdf-engine=xelatex -o %file_name%_doc.pdf
pause
