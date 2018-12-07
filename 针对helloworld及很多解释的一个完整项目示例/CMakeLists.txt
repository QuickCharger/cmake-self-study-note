cmake_minimum_required(VERSION 3.3)

#原文 project(libraryTest CXX) 第二个参数指定language， 此处省略
project(libraryTest)

# 此修改默认安装地址， 原文没有
SET(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}")

add_subdirectory(src)