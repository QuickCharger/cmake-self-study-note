SET filedir=%~dp0
mkdir sln
cd sln
cmake ..
cmake --build . --target install --config Debug --clean-first
pause