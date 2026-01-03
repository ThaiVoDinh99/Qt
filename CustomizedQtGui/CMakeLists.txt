cmake_minimum_required(VERSION 3.10)
project(CustomQtGui)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS REQUIRED Gui Quick Core Qml)

qt6_add_executable(${PROJECT_NAME} main.cpp CustomizedQtGui.h CustomizedQtGui.cpp resources.qrc CustomModel.h CustomModel.cpp CustomEngine.h CustomEngine.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Gui Qt6::Quick Qt6::Core Qt6::Qml)