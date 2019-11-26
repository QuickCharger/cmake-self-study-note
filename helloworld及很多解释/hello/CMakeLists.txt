# aux_source_directory(<dir> <variable>) 搜索路径将搜索到的文件赋值变量
# 已知的搜索格式包含c cpp 不包含 h txt
AUX_SOURCE_DIRECTORY(. files)

# 排除指定文件,files里面的文件带有路径,排除时也需要添加路径
LIST(REMOVE_ITEM files ./useless.cpp)

# 指定exe的输出路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 第一参数为vcproj对应名称
ADD_EXECUTABLE(hello ${files})

# 安装 win下默认安装地址是"Program Files", 可在cmake时修改CMAKE_INSTALL_PREFIX指定默认位置
INSTALL(TARGETS hello DESTINATION bin)
