set(SUB_PROJ_NAME weak_sym)
#
add_library(${SUB_PROJ_NAME}_static_lib_weak STATIC static_lib_weak.cpp)
add_library(${SUB_PROJ_NAME}_static_lib_strong STATIC static_lib_strong.cpp)

add_executable(${SUB_PROJ_NAME} main.cpp foo_strong.cpp foo_weak.cpp PunCha.h)
#target_link_libraries(${SUB_PROJ_NAME})
