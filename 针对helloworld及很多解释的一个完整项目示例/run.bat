SET filedir=%~dp0
mkdir sln
cd sln
cmake ..
cmake --build . --target install --clean-first
pause