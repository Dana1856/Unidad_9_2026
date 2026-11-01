@echo off
echo Iniciando compilacion...

REM Compila todos los archivos .cpp en la carpeta src
REM -I include: Indica al compilador donde buscar los archivos .hpp
REM -Wall -Wextra: Habilita advertencias para asegurar la calidad del codigo
REM -o programa.exe: Genera el ejecutable con este nombre

g++ -Wall -Wextra main.cpp src\*.cpp -I include -o programa.exe

IF %ERRORLEVEL% NEQ 0 (
    echo.
    echo [ERROR] Fallo en la compilacion. Revisa la sintaxis.
    pause
    exit /b %ERRORLEVEL%
)

echo.
echo [EXITO] Compilacion completada. Ejecutando programa...
echo ------------------------------------------------------
programa.exe
echo ------------------------------------------------------
pause