add_library(Student ${CMAKE_CURRENT_SOURCE_DIR}/sources/Student.cpp)
add_library(LibCard ${CMAKE_CURRENT_SOURCE_DIR}/sources/LibCard.cpp)
add_library(Library ${CMAKE_CURRENT_SOURCE_DIR}/sources/Library.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Student LibCard Library)