@echo off
@setlocal enableextensions
@cd /d "%~dp0"

Powershell.exe Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))

Powershell.exe choco install pandoc --force --force-dependencies
Powershell.exe choco install rsvg-convert --force --force-dependencies
Powershell.exe choco install python --force --force-dependencies
Powershell.exe choco install miktex --force --force-dependencies

Powershell.exe Invoke-Expression (New-Object System.Net.WebClient).DownloadString('https://get.scoop.sh')
Powershell.exe Set-ExecutionPolicy RemoteSigned -scope CurrentUser
Powershell.exe scoop install curl
Powershell.exe scoop update curl
Powershell.exe scoop install marp
Powershell.exe scoop update marp


pip install mkdocs
pip install --upgrade --force-reinstal pymdown-extensions
pip install --upgrade --force-reinstal mkdocs-material
pip install --upgrade --force-reinstal mkdocs-git-revision-date-localized-plugin
pip install --upgrade --force-reinstal mkdocs-minify-plugin
pip install --upgrade --force-reinstal mkdocs-static-i18n
pip install --upgrade --force-reinstal mkdocs-with-pdf
pip install --upgrade --force-reinstal qrcode
pip install --upgrade --force-reinstal mkdocs-awesome-pages-plugin

pip install --upgrade pptx2md
pause