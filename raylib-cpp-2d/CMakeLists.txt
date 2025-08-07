cmake_minimum_required(VERSION 3.15)
project(RaylibCppStarter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Raylib klasörünü ekle (external dizininde)
add_subdirectory(external/raylib)

include_directories(external/raylib/src)

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} raylib)

# Gerekli sistem kütüphanelerini ekle (Linux/macOS)
if (UNIX AND NOT APPLE)
    target_link_libraries(${PROJECT_NAME} m pthread dl X11)
endif()
