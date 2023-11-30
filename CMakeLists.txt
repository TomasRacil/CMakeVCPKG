cmake_minimum_required(VERSION 3.0.0)
project(Example VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Example main.cpp)

set(DCMAKE_TOOLCHAIN_FILE "/usr/local/vcpkg/scripts/buildsystems/vcpkg.cmake")
set(CMAKE_PREFIX_PATH "/usr/local/vcpkg/packages/fmt_x64-linux/share")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)