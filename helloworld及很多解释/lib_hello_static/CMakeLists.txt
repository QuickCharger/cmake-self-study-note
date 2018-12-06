# 指定库输出路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib_hello_static)

# hello_static为此静态库的名称
ADD_LIBRARY (hello_static STATIC hello.c)

# 使动态库和静态库同时存在, 不了解怎么用 屏蔽
#set_target_properties(hello_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 版本 VERSION 1.0版 SOVERSION 1版
SET_TARGET_PROPERTIES(hello_static PROPERTIES VERSION 1.0 SOVERSION 1)
