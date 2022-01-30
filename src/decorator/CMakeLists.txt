# 指定包含目录
include_directories(./beverage)
include_directories(./condiment)

# 添加子目录
add_subdirectory(beverage)
add_subdirectory(condiment)

# 生成库文件
add_library(decorator beverage condiment)

# 链接库
target_link_libraries(decorator 
beverage
condiment
)