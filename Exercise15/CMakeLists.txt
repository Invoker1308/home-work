add_library(Student ${CMAKE_CURRENT_SOURCE_DIR}/sources/Student.cpp)
add_library(InServiceStudent ${CMAKE_CURRENT_SOURCE_DIR}/sources/InServiceStudent.cpp)
add_library(FacultyManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/FacultyManagement.cpp)
add_library(Result ${CMAKE_CURRENT_SOURCE_DIR}/sources/Result.cpp)
add_library(StudentManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/StudentManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Student InServiceStudent FacultyManagement Result StudentManagement)