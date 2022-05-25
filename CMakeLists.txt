cmake_minimum_required(VERSION 3.22)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt/6.2_3.1/lib/cmake")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(untitled main.cpp
                        mainwindow.cpp
                        mainwindow.h
                        mainwindow.ui
                        storage.cpp
                        storage.h)
target_link_libraries(untitled
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

