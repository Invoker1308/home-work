add_library(Document ${CMAKE_CURRENT_SOURCE_DIR}/sources/Document.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Document)