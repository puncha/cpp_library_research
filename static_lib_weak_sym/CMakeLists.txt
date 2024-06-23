set(SUB_PROJ_NAME static_lib_weak_sym)
#
add_library(${SUB_PROJ_NAME}_static_lib_weak STATIC static_lib_weak.cpp PunCha.h)
add_library(${SUB_PROJ_NAME}_static_lib_strong STATIC static_lib_strong.cpp PunCha.h)

add_executable(${SUB_PROJ_NAME} main.cpp PunCha.h)
target_link_libraries(${SUB_PROJ_NAME} ${SUB_PROJ_NAME}_static_lib_weak ${SUB_PROJ_NAME}_static_lib_strong)
