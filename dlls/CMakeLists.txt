project(hlsdk-gamedll)

add_library(${PROJECT_NAME} MODULE)

target_include_directories(${PROJECT_NAME}
	PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}
	PRIVATE ${PROJECT_SOURCES}
	PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/wpn_shared/hl_wpn_glock.cpp
	PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../game_shared/voice_gamemgr.cpp
)

target_link_libraries(${PROJECT_NAME} hlsdk-pm_shared)