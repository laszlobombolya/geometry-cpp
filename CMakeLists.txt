cmake_minimum_required(VERSION 3.26)
project(cpp_geometry)
include_directories(shapes)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES
        main.cpp
        containers/ShapeCollection.h
        containers/ShapeCollection.cpp
        shapes/Shape.hpp
        shapes/Circle.h
        shapes/Circle.cpp
        shapes/EquilateralTriangle.h
        shapes/EquilateralTriangle.cpp
        shapes/Rectangle.h
        shapes/Rectangle.cpp
        shapes/Triangle.h
        shapes/Triangle.cpp
        shapes/RegularPentagon.h
        shapes/RegularPentagon.cpp
        shapes/Square.h
        shapes/Square.cpp
        util/FormulaProvider.hpp
)



add_executable(cpp_geometry ${SOURCE_FILES} )
