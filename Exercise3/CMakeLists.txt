add_library(CandidateManagement ${CMAKE_CURRENT_SOURCE_DIR}/sources/CandidateManagement.cpp)
add_library(Candidate ${CMAKE_CURRENT_SOURCE_DIR}/sources/Candidate.cpp)
add_library(GroupA ${CMAKE_CURRENT_SOURCE_DIR}/sources/GroupA.cpp)
add_library(GroupB ${CMAKE_CURRENT_SOURCE_DIR}/sources/GroupB.cpp)
add_library(GroupC ${CMAKE_CURRENT_SOURCE_DIR}/sources/GroupC.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/sources/main.cpp)

target_link_libraries(main Candidate GroupA GroupB GroupC CandidateManagement)