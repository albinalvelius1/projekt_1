cmake_minimum_required(VERSION 3.0.0)
project(piproject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})
add_executable(cmakewx main.cpp)
target_link_libraries(cmakewx ${wxWidgets_LIBRARIES})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
