add_library(Employee ${CMAKE_CURRENT_SOURCE_DIR}/sources/Employee.cpp)
add_library(Experience ${CMAKE_CURRENT_SOURCE_DIR}/sources/Experience.cpp)
add_library(Fresher ${CMAKE_CURRENT_SOURCE_DIR}/sources/Fresher.cpp)
add_library(Intern ${CMAKE_CURRENT_SOURCE_DIR}/sources/Intern.cpp)
add_library(EmployeeManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/EmployeeManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Employee Experience Fresher Intern EmployeeManagement)