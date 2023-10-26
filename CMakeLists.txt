cmake_minimum_required(VERSION 3.5)

project(deltaclient VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

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

# Add the subdirectories for foo and bar components
include_directories(Agent_Manager)
include_directories(API_Manager)
include_directories(Auth_Manager)
include_directories(Config_Manager)
include_directories(Logging_Manager)
include_directories(Network_Manager)
include_directories(UI_Manager)
include_directories(Update_Manager)
include_directories(Abstracts)



if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(deltaclient MANUAL_FINALIZATION main.cpp)
else()
    if(ANDROID)
        add_library(deltaclient SHARED main.cpp)
    else()
        add_executable(deltaclient main.cpp)
    endif()
endif()

target_link_libraries(deltaclient PRIVATE Qt${QT_VERSION_MAJOR}::Widgets AgentManager)

include(GNUInstallDirs)
install(TARGETS deltaclient
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

set_target_properties(deltaclient PROPERTIES MACOSX_BUNDLE TRUE)



if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(deltaclient)
endif()
