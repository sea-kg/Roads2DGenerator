@echo off

endlocal
setlocal enabledelayedexpansion

pushd %~dp0
set SCRIPT_DIR=%CD%
popd

echo Current dir: %SCRIPT_DIR%

rem call "%VS140COMNTOOLS%..\..\VC\bin\x64_amd64\vcvarsx64_amd64.bat"
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

echo ====== msbuild version ======
msbuild -version
echo =============================

echo CMake configuring...
cmake -H. -Btmp\windows -G "Visual Studio 17 2022" -A x64 -DCMAKE_BUILD_TYPE=Release
rem > win-build.log 2>&1
if %ERRORLEVEL% GEQ 1 (
    echo Failed cmake prepare configuration. Log of build look in file win-build.log
    EXIT /B 1
)
echo Done.

echo Building...
cmake --build tmp\windows --config Release
rem >> win-build.log 2>&1
if %ERRORLEVEL% GEQ 1 (
    echo Failed cmake build. Log of build look in file win-build.log
    EXIT /B 1
)
echo Done.

endlocal