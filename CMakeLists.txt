cmake_minimum_required(VERSION 3.16)
project(vtuber-kit-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vtuberkitx
    src/main.cpp
    src/avatar.cpp
    src/tracking.cpp
    src/tts.cpp
)

target_include_directories(vtuberkitx PRIVATE include)

if(WIN32)
    target_link_libraries(vtuberkitx PRIVATE userenv)
endif()
