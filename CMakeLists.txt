cmake_minimum_required(VERSION 3.25)
project(bin_research)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(static_lib_dup_sym)
add_subdirectory(static_lib_dup_sym_conflict)
add_subdirectory(static_dyn_dup_sym)
add_subdirectory(dyn_dup_sym)
add_subdirectory(weak_sym)
add_subdirectory(static_lib_weak_sym)
