include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(librarytest main.cpp)

target_link_libraries(librarytest person_static)

add_dependencies(librarytest person_static)

# 添加二进制安装地址, 原文没有
INSTALL(TARGETS librarytest DESTINATION bin)