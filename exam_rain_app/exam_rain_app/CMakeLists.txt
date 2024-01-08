cmake_minimum_required(VERSION 3.14)

project(exam_rain_app LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(exam_rain_app
  main.cpp
  rain.h rain.cpp
  rainxml.h rainxml.cpp
  rainrecord.h rainrecord.cpp
  rainrecordxml.h rainrecordxml.cpp
  graph.h graph.cpp
  graph.h graph.cpp
  bar.h bar.cpp
  column.h column.cpp
  stationthread.h stationthread.cpp
  client.h client.cpp
)
target_link_libraries(exam_rain_app Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS exam_rain_app
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
