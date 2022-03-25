@echo off
@setlocal enableextensions
@cd /d "%~dp0"

Powershell.exe Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))

Powershell.exe choco install pandoc
Powershell.exe choco install rsvg-convert
Powershell.exe choco install python
Powershell.exe choco install miktex

Powershell.exe Invoke-Expression (New-Object System.Net.WebClient).DownloadString('https://get.scoop.sh')
Powershell.exe Set-ExecutionPolicy RemoteSigned -scope CurrentUser
Powershell.exe scoop install curl
Powershell.exe scoop install marp


pip install mkdocs
pip install pymdown-extensions
pip install mkdocs-material
pip install mkdocs-git-revision-date-localized-plugin
pip install mkdocs-minify-plugin
pip install mkdocs-static-i18n
pip install mkdocs-with-pdf
pip install qrcode
pip install mkdocs-awesome-pages-plugin

pip install pptx2md
pause