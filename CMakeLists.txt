cmake_minimum_required(VERSION 3.0)
project( facial-landmark-detection )
find_package( OpenCV REQUIRED )
set(SRC
    src/main.cpp    
)
set(INCL       
    # include/test.h
)
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( main ${SRC} ${INCL} )
target_link_libraries( main ${OpenCV_LIBS} )


# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)