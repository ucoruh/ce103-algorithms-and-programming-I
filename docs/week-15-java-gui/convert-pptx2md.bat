@echo off
@setlocal enableextensions
@cd /d "%~dp0"
for %%# in (*.pptx) do set "file_name=%%~nx#"
echo file found %file_name%
rem python 3.6-3.9 is required for pptx2md set PATH variable
Powershell.exe pptx2md --disable-escaping ./%file_name% -o ./%file_name%.md -i ./assets
pause


