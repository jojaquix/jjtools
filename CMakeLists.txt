cmake_minimum_required(VERSION 3.12)
project(jjtools)

add_executable(chunk_writer chunk_writer.cpp)

if (WIN32)
	add_executable(chunk_writer_win chunk_writer_win.cpp)
endif()
