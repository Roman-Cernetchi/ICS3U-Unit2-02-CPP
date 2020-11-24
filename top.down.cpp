// Copyright (c) 2020 Roman Cernetchi All rights reserved
//
// Created by: Roman Cernetchi
// Created on: November 2020
// This program calculates the Area and Perimeter of a circle
//     with radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    // This program calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // Input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // Output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm^2" << std::endl;
    std::cout << "Perimeter is " << perimeter << "mm" << std::endl;
}
