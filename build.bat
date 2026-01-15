@echo off
setlocal EnableExtensions EnableDelayedExpansion

set PYTHON=C:\Program Files\Python310\python.exe

echo === Downloading tools ===

"%PYTHON%" tools\download_tool.py dtk "%TOOLS_DIR%\dtk.exe" --tag v1.6.2
if errorlevel 1 goto :error

"%PYTHON%" tools\download_tool.py objdiff-cli "%TOOLS_DIR%\objdiff-cli.exe" --tag v3.0.0-beta.12
if errorlevel 1 goto :error

"%PYTHON%" tools\download_tool.py sjiswrap "%TOOLS_DIR%\sjiswrap.exe" --tag v1.2.1
if errorlevel 1 goto :error

"%PYTHON%" tools\download_tool.py compilers "%BUILD_DIR%\compilers" --tag 20250725
if errorlevel 1 goto :error

"%PYTHON%" tools\download_tool.py binutils "%BUILD_DIR%\binutils" --tag 2.42-1
if errorlevel 1 goto :error

set BUILD_DIR=build
set TOOLS_DIR=%BUILD_DIR%\tools

if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"
if not exist "%TOOLS_DIR%" mkdir "%TOOLS_DIR%"

echo === Running configure.py ===

"%PYTHON%" configure.py
if errorlevel 1 goto :error

echo === Splitting XEX ===

if not exist "%BUILD_DIR%\tag_debug_untracked_jul_11_2011" mkdir "%BUILD_DIR%\tag_debug_untracked_jul_11_2011"

"%TOOLS_DIR%\dtk.exe" xex split config\tag_debug_untracked_jul_11_2011\config.yml "%BUILD_DIR%\tag_debug_untracked_jul_11_2011"
if errorlevel 1 goto :error

echo.
echo Build script completed successfully.
exit /b 0

:error
echo.
echo ERROR: Build failed.
exit /b 1
