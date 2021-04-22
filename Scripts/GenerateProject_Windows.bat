@echo off
REM see https://stackoverflow.com/questions/46089044/what-does-pushd-dp0-in-cmd-file-means-i-understand-dp0-means-it-indicates
pushd %~dp0\..\
dir
call C:\bin\premake5.exe vs2019
popd
PAUSE