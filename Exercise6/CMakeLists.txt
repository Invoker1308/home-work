add_library(School ${CMAKE_CURRENT_SOURCE_DIR}/sources/School.cpp)
add_library(Student ${CMAKE_CURRENT_SOURCE_DIR}/sources/Student.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main School Student)