cmake_minimum_required(VERSION 3.19)

project(Firefly CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

# Include common CMake utilities first.
include(CMakeDependentOption)
include(GNUInstallDirs)

# Configurable options.

option(BUILD_SHARED_LIBS "Build shared libraries" TRUE)
option(FIREFLY_BUILD_EXAMPLES "Build the examples." ${PROJECT_IS_TOP_LEVEL})

include_directories(BEFORE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Include only necessary subdirectories.
add_subdirectory(src)
if(${FIREFLY_BUILD_EXAMPLES})
    add_subdirectory(examples)
endif()
