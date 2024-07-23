cmake_minimum_required(VERSION 3.15)

project(number_converter)

file(GLOB_RECURSE SOURCES src/*.cpp)
add_library(${PROJECT_NAME}_STATIC STATIC ${SOURCES})
add_library(${PROJECT_NAME}_SHARED SHARED ${SOURCES})
set_target_properties(${PROJECT_NAME}_STATIC PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
set_target_properties(${PROJECT_NAME}_SHARED PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}_STATIC INTERFACE include)
target_include_directories(${PROJECT_NAME}_SHARED INTERFACE include)

install(
	TARGETS ${PROJECT_NAME}_STATIC ${PROJECT_NAME}_SHARED
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)
install(DIRECTORY include/ DESTINATION include)