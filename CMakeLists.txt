# CMAKE 最低版本要求
cmake_minimum_required(VERSION 3.0.0)

# 项目信息
project(example_adapter VERSION 0.1.0)

# 指定包含目录
include_directories(./src/adapter)
include_directories(./src/decorator)
include_directories(./src/example)

# 指定生成路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")

# 添加子目录
add_subdirectory(./src/adapter)
add_subdirectory(./src/decorator)

# 指定生成目标
add_executable(example_adapter ./src/example/example_adapter.cpp)
add_executable(ezample_decorator ./src/example/ezample_decorator.cpp)

# 链接库
target_link_libraries(example_adapter adapter)
target_link_libraries(ezample_decorator decorator)