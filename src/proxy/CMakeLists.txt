# 指定目录下所有源文件
aux_source_directory(. ALL_SOURCES)

# 生成库文件
add_library(proxy STATIC ${ALL_SOURCES})