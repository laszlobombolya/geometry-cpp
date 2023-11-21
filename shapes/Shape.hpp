#pragma once


class Shape {

public:
    /**
    * Calculates shape's area.
    *
    * @return area of the shape
    */
    virtual double calculateArea() = 0;

    /**
     * Calculates shape's perimeter.
     *
     * @return perimeter of the shape
     */
    virtual double calculatePerimeter() = 0;

    /**
     * Check if number is greater than 0
     * Throws IllegalArgumentException if any of the parameters is 0 or less.
     *
     * @param number
     * @return true if all of args are greater than 0
     */
    static bool checkIfArgsGreaterThanZero(float number) {
        return false;
    }
};
