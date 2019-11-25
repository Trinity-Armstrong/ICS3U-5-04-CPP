// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program calculates the volume of a cylinder

#include <cmath>
#include <iostream>
#include <iomanip>

float Calculate(int radius, int height) {
    // This function calculates the volume of a cylinder

    // Variables
    const float pi = M_PI;
    float area;

    // Process
    area = (pi*pow(radius, 2))*height;
    return area;
}

int main() {
    // This function gets the radius & height then outputs answer

    // Variables
    int radiusFromUser;
    int heightFromUser;
    float userArea;
    std::string radiusAsString;
    std::string heightAsString;

    // Process
    while (true) {
        std::cout << "Enter the radius (cm):" \
        << std::endl;
        std::cin >> radiusAsString;
        std::cout << "Enter the height (cm):" \
        << std::endl;
        std::cin >> heightAsString;
        std::cout << "" << std::endl;

        try {
            radiusFromUser = std::stoi(radiusAsString);
            heightFromUser = std::stoi(heightAsString);
            userArea = Calculate(radiusFromUser, heightFromUser);
            if (radiusFromUser == std::stoi(radiusAsString) && \
                heightFromUser == std::stoi(heightAsString)) {
                std::cout << "The volume of your cylinder is " \
                << userArea << "cm³." << std::endl;
                break;
            } else {
                std::cout << "Error! Try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Error! Try again." << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
