//
// Created by Joe Bekor on 2023. 11. 21..
//

#pragma once
#include <string>

using namespace std;

class FormulaProvider {
public:
    /**
     * Returns the area formula for a given shape.
     *
     * @param shape type of the shape of the requested formula
     * @return area formula
     */
    static string getAreaForShape(string shape) {
        return "";
    }

    /**
     * Returns the perimeter formula for a given shape.
     *
     * @param shape type of the shape of the requested formula
     * @return perimeter formula
     */
    static string getPerimeterForShape(string shape) {
        return "";
    }
};
