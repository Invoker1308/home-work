add_library(Customer ${CMAKE_CURRENT_SOURCE_DIR}/sources/Customer.cpp)
add_library(Receipt ${CMAKE_CURRENT_SOURCE_DIR}/sources/Receipt.cpp)
add_library(ReceiptManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/ReceiptManagement.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Customer Receipt ReceiptManagement)