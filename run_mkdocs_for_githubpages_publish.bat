@echo off
@setlocal enableextensions
@cd /d "%~dp0"
mkdocs gh-deploy --force
pause