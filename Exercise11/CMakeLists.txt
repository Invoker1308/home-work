add_library(Complex ${CMAKE_CURRENT_SOURCE_DIR}/sources/Complex.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Complex)