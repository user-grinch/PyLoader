rem Generate visual studio files and run the devcmd init
@echo off

set "OUT_DIR="F:\GTASanAndreas""

cd tools
premake5.exe vs2022
cd ../build
call "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat"
