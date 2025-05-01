cmake_minimum_required(VERSION 3.15)
project(3DPGCodeTranslator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(3DPGCodeTranslator
        src/GCodeTranslator.cpp
        src/dispatchers/MotionDispatcher.cpp
        src/dispatchers/TemperatureDispatcher.cpp
        src/dispatchers/FanDispatcher.cpp
)

target_include_directories(3DPGCodeTranslator
        PUBLIC
        include
)

add_executable(3DPGCodeTranslator src/main.cpp)
target_link_libraries(3DPGCodeTranslator 3DPGCodeTranslator)
