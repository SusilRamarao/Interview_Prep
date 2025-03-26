cmake_minimum_required(VERSION 3.15)
project(IPC VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)

# Add executable target
add_executable(IPC main.cpp ${BOOST})

add_executable(IPC_Client main.cpp ${BOOST})

# Add library target
#add_library(MyLibrary src/my_library.cpp)

# Add include directories
target_include_directories(IPC PRIVATE ${Boost_INCLUDE_DIR})

# Link libraries
target_link_libraries(IPC PUBLIC ${Boost_LIBRARIES})

target_include_directories(IPC_Client PRIVATE ${Boost_INCLUDE_DIR})

# Link libraries
target_link_libraries(IPC_Client PUBLIC ${Boost_LIBRARIES})

# Add subdirectory
#add_subdirectory(src)