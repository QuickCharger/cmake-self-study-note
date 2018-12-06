# 指定库输出路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib_hello_shared)

# hello_static为此静态库的名称
ADD_LIBRARY (hello_shared SHARED hello.h hello.cpp)

#SET_TARGET_PROPERTIES(hello_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)