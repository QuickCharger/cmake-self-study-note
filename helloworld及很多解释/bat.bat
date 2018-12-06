SET filedir=%~dp0
mkdir sln
cd sln
cmake ..
cmake --build .
pause