cmake_minimum_required(VERSION 4.0)
project(Banknoter)

set(CMAKE_CXX_STANDARD 23)

# Включаем поддержку Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(Banknoter
        main.cpp

        src/MainWindow.cpp
        src/BanknotesWindow.cpp

        include/MainWindow.h
        include/BanknotesWindow.h

        ui/MainWindow.ui
        ui/BanknotesWindow.ui
)

target_include_directories(Banknoter PRIVATE
        include
)

target_link_libraries(Banknoter
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)