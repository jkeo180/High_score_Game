cmake_minimum_required(VERSION 3.16)
project(HighScoreGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# CRITICAL: Add these three lines
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

qt_add_executable(HighScoreGame
    main.cpp
    MainWindow.cpp
    MainWindow.h
    MainWindow.ui   # Do NOT list ui_mainwindow.h here
    game.cpp
    score.cpp
)
target_include_directories(HighScoreGame PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
target_link_libraries(HighScoreGame PRIVATE Qt6::Widgets)
# This forces the compiler to look in the hidden "autogen" folders
set_target_properties(HighScoreGame PROPERTIES AUTOGEN_BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}/autogen")
target_include_directories(HighScoreGame PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/HighScoreGame_autogen/include")
