cmake_minimum_required(VERSION 3.5)

project(CppMultiFileDemo)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 包含头文件目录
include_directories(include)

# 生成可执行文件
add_executable(math
    src/main.cpp
    src/add.cpp
)

# 启用调试信息（关键！）
target_compile_options(math PRIVATE -g)