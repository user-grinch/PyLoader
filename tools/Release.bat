@echo off
echo --------------------------------------------------
echo Building Release
echo --------------------------------------------------
echo[
call "tools\Setup.bat"
MsBuild PyLoader.sln /property:Configuration=Release /t:PyLoader
del %SA_DIR%"\PyLoader.asi" /Q
%systemroot%\System32\xcopy /s "bin\PyLoader.asi" %SA_DIR%"\" /K /D /H /Y 
