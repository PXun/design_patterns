# 指定包含目录
include_directories(./ext_db_sdk)

# 添加子目录
add_subdirectory(ext_db_sdk)

# 指定目录下所有源文件
aux_source_directory(. ALL_SOURCES)

# 生成库文件
add_library(adapter STATIC ${ALL_SOURCES})

# 链接库
target_link_libraries(adapter ext_db_sdk)