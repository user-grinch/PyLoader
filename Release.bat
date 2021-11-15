@echo off
premake5.exe vs2022
cd build
call "C:\Program Files\Microsoft Visual Studio\2022\Preview\Common7\Tools\VsDevCmd.bat"
MsBuild PyLoader.sln /property:Configuration=Release
cd ..
