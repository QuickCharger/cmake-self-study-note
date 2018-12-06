#PROJECT(projectname [c][cxx][Java])
#定义工程名称，可指定工程支持的语言(可忽略,默认情况表示支持所有语言)
#隐式的定义了两个cmake变量
#<projectname>_BINARY_DIR
#<projectname>_SOURCE_DIR
#cmake系统帮助我们预定义了PROJECT_BINARY_DIR 和 PROJECT_SOURCE_DIR,值分别跟<projectname>_BINARY_DIR 和 <projectname>_SOURCE_DIR一致
#为了统一起见，建议以后直接使用PROJECT_BINARY_DIR 和 PROJECT_SOURCE_DIR，这样即使修改了工作名称，也不会影响这两个变量
PROJECT(HELLO)

#SET(VAR [VALUE] [CHCHE TYPE DOCSTRING [FORCE]])
#用来显式的定义变量，多个文件用空格隔开
SET(SRC_LIST main.c)

#MESSAGE([SEND_ERROR|STATUS|FATAL_ERROR] "MESSAGE" ...)
#SEND_ERROR	产生错误，生成过程被跳过
#STATUS		输出前缀为-的信息
#FATAL_ERROR	立即终止所有cmake过程
MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR})	#qwer
MESSAGE(STATUS "This is SOURCE dir " ${HELLO_SOURCE_DIR})

#定义工程会生成一个文件名为hello的可执行文件，相关的源文件是SRC_LIST定义的源文件列表
#可执行文件的名字与工程名称没半毛钱关系，可执行文件的名字随意写
# ${} 表示取值，注：IF控制语句中是直接使用变量名
ADD_EXECUTABLE(hello ${SRC_LIST})