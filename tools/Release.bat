@echo off
echo --------------------------------------------------
echo Building ReleaseSA
echo --------------------------------------------------
echo[
call "tools\Setup.bat"
MsBuild PyLoader.sln /property:Configuration=Release /t:PyLoader
%systemroot%\System32\xcopy /s "bin\PyLoader.asi" %OUT_DIR% /K /D /H /Y 
