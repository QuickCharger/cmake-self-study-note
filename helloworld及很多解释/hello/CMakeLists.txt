# 指定exe的输出路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 第一参数为vcproj对应名称
ADD_EXECUTABLE(hello main.c)
