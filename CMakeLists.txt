cmake_minimum_required(VERSION 3.24)
project(hexcrawler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH ~/Qt/6.4.2/gcc_64)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)


add_subdirectory(include)


add_executable(hexcrawler src/main.cpp)
target_link_libraries(hexcrawler
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        include_lib
        )

