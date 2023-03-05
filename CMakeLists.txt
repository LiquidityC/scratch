cmake_minimum_required(VERSION 3.7)

project(c_scratch LANGUAGES C CXX VERSION 0.1.0)

# Compile and link flags
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -fsanitize=address -fno-omit-frame-pointer")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -fsanitize=address -fno-omit-frame-pointer")
set(CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fsanitize=address -fno-omit-frame-pointer")

file(GLOB C_SOURCE_FILES src/*.c)
file(GLOB CXX_SOURCE_FILES src/*.cpp)

foreach(F IN LISTS C_SOURCE_FILES)
	get_filename_component(EXENAME ${F} NAME_WE)
	add_executable(${EXENAME} ${F})
	target_link_libraries(${EXENAME} ${SDL_LIBRARIES})
endforeach ()

foreach(F IN LISTS CXX_SOURCE_FILES)
	get_filename_component(EXENAME ${F} NAME_WE)
	add_executable(${EXENAME} ${F})
	target_link_libraries(${EXENAME} ${SDL_LIBRARIES})
endforeach ()
