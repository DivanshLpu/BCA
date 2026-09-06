@echo off
setlocal

set SRC=main.c
set EXE=main.exe

echo ==========================
echo Compiling %SRC%...
echo ==========================

gcc "%SRC%" -o "%EXE%"

if errorlevel 1 (
    echo.
    echo Compilation failed!
    pause
    exit /b 1
)

echo.
echo ==========================
echo Running %EXE%
echo ==========================
echo.

"%EXE%"

echo.
echo ==========================
echo Program finished.
echo ==========================
pause