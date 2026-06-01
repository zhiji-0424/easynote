cmake_minimum_required(VERSION 3.16)
project(easynote LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# include(FetchContent)

# FetchContent_Declare(
#     webview
#     GIT_REPOSITORY https://github.com/webview/webview
#     GIT_TAG 0.12.0)
# FetchContent_MakeAvailable(webview)
add_subdirectory(lib/webview-0.12.0)

add_executable(easynote WIN32)
target_sources(easynote PRIVATE src/main.cpp)
target_link_libraries(easynote PRIVATE webview::core)
