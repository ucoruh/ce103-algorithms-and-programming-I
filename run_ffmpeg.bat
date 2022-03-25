rem https://github.com/acaudwell/Gource/wiki/Videos
rem https://www.gyan.dev/ffmpeg/builds/
rem https://stackoverflow.com/questions/1762960/gource-on-windows
@echo off
@setlocal enableextensions
@cd /d "%~dp0"
ffmpeg -i output.ppm -c:v libx264 -crf 24 -preset veryslow output.mp4
pause
