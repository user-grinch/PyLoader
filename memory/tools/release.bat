@echo off
echo --------------------------------------------------
echo Building Release
echo --------------------------------------------------
echo[
call "tools\setup.bat"
MsBuild plugin.sln /property:Configuration=Release
