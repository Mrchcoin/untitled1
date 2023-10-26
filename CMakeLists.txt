cmake_minimum_required(VERSION 3.5)

project(untitled1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(untitled1 MANUAL_FINALIZATION main.cpp)
else()
    if(ANDROID)
        add_library(untitled1 SHARED main.cpp)
    else()
        add_executable(untitled1 main.cpp)
    endif()
endif()

target_link_libraries(untitled1 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

include(GNUInstallDirs)
install(TARGETS untitled1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

set_target_properties(untitled1 PROPERTIES MACOSX_BUNDLE TRUE)

# Add the subdirectories for foo and bar components
add_subdirectory(Agent_Manager)
add_subdirectory(API_Manager)
add_subdirectory(Auth_Manager)
add_subdirectory(Config_Manager)
add_subdirectory(Logging_Manager)
add_subdirectory(Network_Manager)
add_subdirectory(UI_Manager)
add_subdirectory(Update_Manager)
add_subdirectory(Abstracts)
    
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(untitled1)
endif()