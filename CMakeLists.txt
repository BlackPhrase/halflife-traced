cmake_minimum_required(VERSION 3.14)
project(halflife-traced)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/common
	${CMAKE_CURRENT_SOURCE_DIR}/engine
	${CMAKE_CURRENT_SOURCE_DIR}/game_shared
	${CMAKE_CURRENT_SOURCE_DIR}/pm_shared
	${CMAKE_CURRENT_SOURCE_DIR}/public
)

# Shut up VS!
add_compile_definitions(_CRT_SECURE_NO_WARNINGS)

add_subdirectory(pm_shared)

add_subdirectory(dlls)