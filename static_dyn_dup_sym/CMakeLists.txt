set(SUB_PROJ_NAME static_dyn_dup_sym)

add_library(${SUB_PROJ_NAME}_static_lib STATIC static_lib.cpp PunCha.h)
add_library(${SUB_PROJ_NAME}_dyn_lib SHARED dyn_lib.cpp PunCha.h)

add_executable(${SUB_PROJ_NAME} main.cpp PunCha.h)

target_link_libraries(${SUB_PROJ_NAME} PUBLIC ${SUB_PROJ_NAME}_static_lib ${SUB_PROJ_NAME}_dyn_lib)

