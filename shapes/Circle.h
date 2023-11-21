#pragma once
#include "Shape.hpp"

class Circle : public Shape{
public:
    double calculateArea() override;
    double calculatePerimeter() override;

};
