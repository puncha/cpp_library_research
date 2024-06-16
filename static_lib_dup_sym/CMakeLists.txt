set(SUB_PROJ_NAME static_lib_dup_sym)

add_library(${SUB_PROJ_NAME}_static_lib1 STATIC static_lib1.cpp static_lib1_demo.cpp PunCha.h)
add_library(${SUB_PROJ_NAME}_static_lib2 STATIC static_lib2.cpp static_lib2_demo.cpp PunCha.h)

add_executable(${SUB_PROJ_NAME} main.cpp PunCha.h)
target_link_libraries(${SUB_PROJ_NAME} ${SUB_PROJ_NAME}_static_lib1 ${SUB_PROJ_NAME}_static_lib2)