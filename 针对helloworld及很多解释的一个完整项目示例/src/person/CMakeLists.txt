aux_source_directory(. srcs)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(person SHARED ${srcs})

add_library(person_static STATIC ${srcs})

set_target_properties(person_static PROPERTIES OUTPUT_NAME "person")

set_target_properties(person PROPERTIES VERSION 1.0 SOvERSON 1)

# 添加库安装地址, 原文没有
INSTALL(TARGETS person DESTINATION lib)
INSTALL(TARGETS person_static DESTINATION lib)