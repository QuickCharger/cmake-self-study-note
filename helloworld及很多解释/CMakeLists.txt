# cmake最小版本需求，可有可无
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
# sln名字
PROJECT(HELLOCMAKE)

# 定义一个变量(name desc value)，可通过输入带来的参数修改此值，修改方法如下
# cmake -DValueName=value
# 此例中的修改方法应为 cmake -DRELEASE=true
option(RELEASE "release or debug" false)

MESSAGE("--------------------CURRENT PLATFORM INFORMATION--------------------")
MESSAGE("    CMAKE_SYSTEM_NAME = " ${CMAKE_SYSTEM_NAME})
MESSAGE("    MSVC_VERSION = " ${MSVC_VERSION})
MESSAGE("    CMAKE_BUILD_TYPE = " ${CMAKE_BUILD_TYPE})
MESSAGE("    CMAKE_CURRENT_SOURCE_DIR = " ${CMAKE_CURRENT_SOURCE_DIR})
MESSAGE("    PROJECT_BINARY_DIR = " ${PROJECT_BINARY_DIR})
MESSAGE("    PROJECT_SOURCE_DIR = " ${PROJECT_SOURCE_DIR})
MESSAGE("    RELEASE = " ${RELEASE})
MESSAGE( "\n\n")

#ADD_SUBDIRECTORY(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
#将source_dir目录加入工程，指定输出路径为binnary_dir(包含中间结果)，EXECLUDE_FROM_ALL含义是将这个目录从编译过程中排除
#ADD_SUBDIRECTORY(hello)
ADD_SUBDIRECTORY(lib_hello_shared)
ADD_SUBDIRECTORY(hello_call_shared)
#ADD_SUBDIRECTORY(lib_hello_static)
#ADD_SUBDIRECTORY(hello_call_static)
