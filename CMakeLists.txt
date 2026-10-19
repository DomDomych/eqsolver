cmake_minimum_required(VERSION 3.16)
project(eqsolver LANGUAGES CXX)

enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(eqsolver_core
    core/src/complex.cpp
    core/src/equation.cpp
    core/src/collection.cpp
)
target_include_directories(eqsolver_core PUBLIC core/include)

add_executable(eqsolver
    main.cpp
    cli/src/cli.cpp
)
target_include_directories(eqsolver PRIVATE cli/include)
target_link_libraries(eqsolver PRIVATE eqsolver_core)
