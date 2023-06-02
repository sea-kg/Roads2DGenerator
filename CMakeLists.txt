cmake_minimum_required(VERSION 3.16)

add_definitions(-DWSJCPP_APP_VERSION="v0.0.1")
add_definitions(-DWSJCPP_APP_NAME="Roads2DGenerator")

project(Roads2DGenerator)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${Roads2DGenerator_SOURCE_DIR})

# Sources

# include header dirs
list (APPEND WSJCPP_INCLUDE_DIRS "src")

# source files
list (APPEND WSJCPP_SOURCES "src/main.cpp")
list (APPEND WSJCPP_SOURCES "src/Roads2DGenerator.cpp")
list (APPEND WSJCPP_SOURCES "src/Roads2DGeneratorUnigineSplineGraph.cpp")

include_directories(${WSJCPP_INCLUDE_DIRS})

add_executable (Roads2DGenerator ${WSJCPP_SOURCES})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set_target_properties(Roads2DGenerator
	PROPERTIES
	OUTPUT_NAME Roads2DGenerator
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}
	RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}
	RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}
	RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}
)