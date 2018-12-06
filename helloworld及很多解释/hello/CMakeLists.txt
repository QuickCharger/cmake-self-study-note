# aux_source_directory(<dir> <variable>) 搜索路径将搜索到的文件赋值变量
# 已知的搜索格式包含c cpp 不包含 h txt
AUX_SOURCE_DIRECTORY(. files)

# 指定exe的输出路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 第一参数为vcproj对应名称
ADD_EXECUTABLE(hello ${files})
