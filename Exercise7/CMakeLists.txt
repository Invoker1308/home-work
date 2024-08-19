add_library(Faculty ${CMAKE_CURRENT_SOURCE_DIR}/sources/Faculty.cpp)
add_library(Person ${CMAKE_CURRENT_SOURCE_DIR}/sources/Person.cpp)
add_library(Teacher ${CMAKE_CURRENT_SOURCE_DIR}/sources/Teacher.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Faculty Person Teacher)