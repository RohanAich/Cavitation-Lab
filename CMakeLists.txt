cmake_minimum_required(VERSION 3.20)

project(
        Cavitation_Lab
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.15.3
)

FetchContent_MakeAvailable(Catch2)

add_library(cavitation_core
        src/solver.cpp
)

target_include_directories(cavitation_core
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(cavitation_lab
        src/main.cpp
)

target_link_libraries(cavitation_lab
        PRIVATE
        cavitation_core
)

enable_testing()

add_executable(cavitation_tests
        tests/solver_tests.cpp
)

target_link_libraries(cavitation_tests
        PRIVATE
        cavitation_core
        Catch2::Catch2WithMain
)

add_test(
        NAME cavitation_tests
        COMMAND cavitation_tests
)