set(SUB_PROJ_NAME static_lib_dup_sym_conflict)

add_library(${SUB_PROJ_NAME}_static_lib1 STATIC static_lib1.cpp PunCha.h)
add_library(${SUB_PROJ_NAME}_static_lib2 STATIC static_lib2.cpp PunCha.h)
add_library(${SUB_PROJ_NAME}_object_lib OBJECT object_lib.cpp)

add_executable(${SUB_PROJ_NAME} main.cpp PunCha.h)

# change it to the second statement to fix the link error
target_link_libraries(${SUB_PROJ_NAME} ${SUB_PROJ_NAME}_static_lib1 ${SUB_PROJ_NAME}_static_lib2)
#target_link_libraries(${SUB_PROJ_NAME} ${SUB_PROJ_NAME}_static_lib1 ${SUB_PROJ_NAME}_static_lib2 ${SUB_PROJ_NAME}_object_lib)

