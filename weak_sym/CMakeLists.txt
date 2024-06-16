set(SUB_PROJ_NAME weak_sym)
#
#add_library(${SUB_PROJ_NAME}_static_lib_weak STATIC static_lib_weak.cpp)
add_library(${SUB_PROJ_NAME}_static_lib_strong STATIC static_lib_strong.cpp)

add_executable(${SUB_PROJ_NAME} main.cpp foo_weak.cpp PunCha.h foo_strong.cpp)

# the first is wrong. Should force scan all the symbols exported by static lib strong
#target_link_libraries(${SUB_PROJ_NAME} ${SUB_PROJ_NAME}_static_lib_strong)
#target_link_libraries(${SUB_PROJ_NAME} $<LINK_LIBRARY:WHOLE_ARCHIVE,${SUB_PROJ_NAME}_static_lib_strong>)

#target_link_libraries(${SUB_PROJ_NAME} ${SUB_PROJ_NAME}_static_lib_weak $<LINK_LIBRARY:WHOLE_ARCHIVE,${SUB_PROJ_NAME}_static_lib_strong>)
#target_link_libraries(${SUB_PROJ_NAME})
