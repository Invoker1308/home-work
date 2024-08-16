add_library(Person ${CMAKE_CURRENT_SOURCE_DIR}/sources/Person.cpp)
add_library(Family ${CMAKE_CURRENT_SOURCE_DIR}/sources/Family.cpp)
add_library(Neighborhood ${CMAKE_CURRENT_SOURCE_DIR}/sources/Neighborhood.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Person Family Neighborhood)