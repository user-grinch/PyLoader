@echo off
echo --------------------------------------------------
echo Building DebugSA
echo --------------------------------------------------
echo[
call "tools\Setup.bat"
MsBuild CheatMenu.sln /property:Configuration=Debug /t:CheatMenuSA
%systemroot%\System32\xcopy /s "bin\CheatMenuSA.asi" %OUT_DIR% /K /D /H /Y 
%systemroot%\System32\xcopy /s "bin\CheatMenuSA.pdb" %OUT_DIR% /K /D /H /Y 
