add_library(Student ${CMAKE_CURRENT_SOURCE_DIR}/sources/Student.cpp)
add_library(NormalStudent ${CMAKE_CURRENT_SOURCE_DIR}/sources/NormalStudent.cpp)
add_library(GoodStudent ${CMAKE_CURRENT_SOURCE_DIR}/sources/GoodStudent.cpp)
add_library(StudentManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/StudentManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Student NormalStudent GoodStudent StudentManagement)