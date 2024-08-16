add_library(Document ${CMAKE_CURRENT_SOURCE_DIR}/sources/Document.cpp)
add_library(Book ${CMAKE_CURRENT_SOURCE_DIR}/sources/Book.cpp)
add_library(Newspaper ${CMAKE_CURRENT_SOURCE_DIR}/sources/Newspaper.cpp)
add_library(Magazine ${CMAKE_CURRENT_SOURCE_DIR}/sources/Magazine.cpp)
add_library(DocumentManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/DocumentManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Document Book Newspaper Magazine DocumentManagement)