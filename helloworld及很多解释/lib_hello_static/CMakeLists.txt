# 指定库输出路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib_hello_static)

# hello_static为此静态库的名称
ADD_LIBRARY (hello_static STATIC hello.c)
