cmake_minimum_required(VERSION 3.16)

project(03-Interface LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(03-Interface
  main.cpp
  Freezer.h
  Microwave.h
  Toaster.h
  appliance.h appliance.cpp
)
target_link_libraries(03-Interface Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS 03-Interface
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
