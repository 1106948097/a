cmake_minimum_required(VERSION 2.8)

set(CMAKE_C_COMPILER /opt/gcc-linaro-6.5.0-2018.12-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER /opt/gcc-linaro-6.5.0-2018.12-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-g++)


include_directories(${PROJECT_SOURCE_DIR}/opencv/include/)
include_directories(${PROJECT_SOURCE_DIR}/opencv/include/opencv/)
include_directories(${PROJECT_SOURCE_DIR}/opencv/include/opencv2/)

#[[set(SOURCE_FILES
	${CMAKE_SOURCE_DIR}/opencv/include
	${CMAKE_SOURCE_DIR}/opencv/include/opencv2)]]

link_directories(${PROJECT_SOURCE_DIR}/opencv/lib/)

#set(base_libraries opencv_world)
add_executable(readPic readPic.cpp)
#target_link_libraries(readPic ${base_libraries})
target_link_libraries(readPic -lopencv_world)

