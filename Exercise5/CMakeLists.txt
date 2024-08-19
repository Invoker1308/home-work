add_library(Hotel ${CMAKE_CURRENT_SOURCE_DIR}/sources/Hotel.cpp)
add_library(Person ${CMAKE_CURRENT_SOURCE_DIR}/sources/Person.cpp)
add_library(Room ${CMAKE_CURRENT_SOURCE_DIR}/sources/Room.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Hotel Person Room)