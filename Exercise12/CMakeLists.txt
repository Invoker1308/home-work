add_library(Transportation ${CMAKE_CURRENT_SOURCE_DIR}/sources/Transportation.cpp)
add_library(Car ${CMAKE_CURRENT_SOURCE_DIR}/sources/Car.cpp)
add_library(Motorbike ${CMAKE_CURRENT_SOURCE_DIR}/sources/Motorbike.cpp)
add_library(Truck ${CMAKE_CURRENT_SOURCE_DIR}/sources/Truck.cpp)
add_library(TransportationManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/TransportationManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Transportation Car Motorbike Truck TransportationManagement)