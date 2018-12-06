# 指定exe的输出路径
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/hello_call_shared)

# 指定头文件路径
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib_hello_shared)

# 指定库路径
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/sln/lib_hello_shared/Debug)

# 第一参数为vcproj对应名称
ADD_EXECUTABLE(hello_call_shared main.cpp)

# 指定库
target_link_libraries(hello_call_shared hello_shared.lib)
