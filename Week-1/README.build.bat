@echo off
@setlocal enableextensions
@cd /d "%~dp0"
Powershell.exe Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
Powershell.exe choco install pandoc
Powershell.exe choco install rsvg-convert python miktex
Powershell.exe Invoke-Expression (New-Object System.Net.WebClient).DownloadString('https://get.scoop.sh')
Powershell.exe Set-ExecutionPolicy RemoteSigned -scope CurrentUser
Powershell.exe scoop install curl
Powershell.exe scoop install marp
Powershell.exe marp README.md --pdf -o README_slide.pdf --allow-local-files
Powershell.exe marp README.md -o README_slide.html --allow-local-files
Powershell.exe marp README.md --pptx -o README_slide.pptx --allow-local-files
Powershell.exe pandoc README.md --pdf-engine=xelatex -o README_doc.pdf
pause
