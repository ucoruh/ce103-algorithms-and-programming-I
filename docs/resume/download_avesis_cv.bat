@echo off
@setlocal enableextensions
@cd /d "%~dp0"

set name="ugur"
set surname="coruh"

curl -o "%name%_%surname%_tr_cv.pdf" "https://avesis.erdogan.edu.tr/%name%.%surname%/indir?languageCode=tr"
curl -o "%name%_%surname%_en_cv.pdf" "https://avesis.erdogan.edu.tr/%name%.%surname%/indir?languageCode=en"

pause




