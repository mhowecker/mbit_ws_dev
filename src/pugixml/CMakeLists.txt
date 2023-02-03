cmake_minimum_required(VERSION 3.8)
project(pugixml)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_definitions(-std=c++0x)

find_package(ament_cmake REQUIRED)

install(
	DIRECTORY include/
	DESTINATION include
)


ament_package()


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


set(XML_LIBRARY_SOURCE_DIR
        src
)

set(XML_LIBRARY_SOURCE_FILES
        src/pugixml.cpp
)
        
set(XML_LIBRARY_HEADER_DIR
        include
)

set(XML_LIBRARY_HEADER_FILES
        include/pugiconfig.hpp
        include/pugixml.hpp
)

include_directories(${XML_LIBRARY_HEADER_DIR})
add_library(pugixml ${XML_LIBRARY_SOURCE_FILES} ${XML_LIBRARY_HEADER_FILES})
