cmake_minimum_required(VERSION 3.5.0)

set(SOURCES
    ./src/Shape.h
    ./src/circle.h
    ./src/circle.cpp
    ./src/RedSquare.h
    ./src/RedSquare.cpp
    ./src/triangle.h
    ./src/triangle.cpp
    ./src/rectangle.h
    ./src/rectangle.cpp

    )

include_directories(
    ./src/
    )
add_executable(MadnessShapes ./src/main.cpp ${SOURCES})