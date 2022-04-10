@echo off
echo --------------------------------------------------
echo Building Debug
echo --------------------------------------------------
echo[
call "tools\setup.bat"
MsBuild plugin.sln /property:Configuration=Debug
