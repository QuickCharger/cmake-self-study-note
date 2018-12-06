# 指定exe的输出路径
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/hello_call_static)

# 指定头文件路径
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib_hello_static)

# 指定库路径
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/sln/lib_hello_static/Debug)

# 第一参数为vcproj对应名称
ADD_EXECUTABLE(hello_call_static main.cpp)

# 指定库
target_link_libraries(hello_call_static hello_static.lib)

#添加依赖，hello_call_static需要hello_static库，防止hello_call_static提前编译完导致编译失败
add_dependencies(hello_call_static hello_static)
