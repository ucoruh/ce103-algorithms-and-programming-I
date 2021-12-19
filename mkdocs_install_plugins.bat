@echo off
@setlocal enableextensions
@cd /d "%~dp0"
pip install --upgrade --force-reinstal pymdown-extensions
pip install --upgrade --force-reinstal mkdocs-material
pause