add_library(Employee ${CMAKE_CURRENT_SOURCE_DIR}/sources/Employee.cpp)
add_library(InheritEmployee ${CMAKE_CURRENT_SOURCE_DIR}/sources/InheritEmployee.cpp)
add_library(EmployeeManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/EmployeeManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Employee InheritEmployee EmployeeManagement)