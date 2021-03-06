# CMAKE 最低版本要求
cmake_minimum_required(VERSION 3.0.0)

# 项目信息
project(example_adapter VERSION 0.1.0)

# 指定包含目录
include_directories(./src/_example)

# 指定生成路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")

# 设置List
set(List factory prototype builder singleton # 创建型模式
adapter decorator bridge composite facade flyweight proxy # 结构型模式
cor strategy template observer state memento command mediator interpreter visitor) # 行为型模式

# 循环
foreach(list ${List})
    # 指定包含目录
    include_directories(./src/${list})
    # 添加一个子目录并构建该子目录
    add_subdirectory(./src/${list})
    # 指定生成目标
    add_executable(example_${list} ./src/_example/example_${list}.cpp)
    # 链接库 - 不能使用相对路径
    target_link_libraries(example_${list} ${list})
endforeach(list)