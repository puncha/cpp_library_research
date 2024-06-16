set(SUB_PROJ_NAME dyn_dup_sym)

add_library(${SUB_PROJ_NAME}_dyn_lib1 SHARED dyn_lib1.cpp PunCha.h)
add_library(${SUB_PROJ_NAME}_dyn_lib2 SHARED dyn_lib2.cpp PunCha.h)

add_executable(${SUB_PROJ_NAME} main.cpp PunCha.h)

target_link_libraries(${SUB_PROJ_NAME} PUBLIC ${SUB_PROJ_NAME}_dyn_lib1 ${SUB_PROJ_NAME}_dyn_lib2)

