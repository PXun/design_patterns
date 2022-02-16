# CMAKE 最低版本要求
cmake_minimum_required(VERSION 3.0.0)

# 项目信息
project(example_adapter VERSION 0.1.0)

# 指定包含目录
include_directories(./src/adapter)
include_directories(./src/decorator)
include_directories(./src/cor)
include_directories(./src/strategy)
include_directories(./src/example)

# 指定生成路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")

# 添加一个子目录并构建该子目录
add_subdirectory(./src/adapter)
add_subdirectory(./src/decorator)
add_subdirectory(./src/cor)
add_subdirectory(./src/strategy)

# 指定生成目标
add_executable(example_adapter ./src/example/example_adapter.cpp)
add_executable(example_decorator ./src/example/example_decorator.cpp)
add_executable(example_cor ./src/example/example_cor.cpp)
add_executable(example_strategy ./src/example/example_strategy.cpp)

# 链接库 - 不能使用相对路径
target_link_libraries(example_adapter adapter)
target_link_libraries(example_decorator decorator)
target_link_libraries(example_cor cor)
target_link_libraries(example_strategy strategy)