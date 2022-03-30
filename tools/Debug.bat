@echo off
echo --------------------------------------------------
echo Building Debug
echo --------------------------------------------------
echo[
call "tools\Setup.bat"
MsBuild PyLoader.sln /property:Configuration=Debug /t:PyLoader
del %SA_DIR%"\PyLoader.asi" /Q
del %SA_DIR%"\PyLoader.pdb" /Q
%systemroot%\System32\xcopy /s "bin\PyLoader.asi" %SA_DIR%"\" /K /D /H /Y 
%systemroot%\System32\xcopy /s "bin\PyLoader.pdb" %SA_DIR%"\" /K /D /H /Y 
