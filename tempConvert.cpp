// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Nov, 25, 2023
// This program will ask user for temp in celsius
// and display it in fahrenheit

#include <iostream>
#include <string>

void fahrenheit() {
    // Get temperature in Celsius from the user and display message
    std::cout << "This program will ask user for temp in celsius\n";
    std::cout << "and display it in fahrenheit.\n";
    std::string userCelsiusStr;
    std::cout << "Enter temperature in degrees Celsius: ";
    std::cin >> userCelsiusStr;

    // Catch if the temp is something wrong
    try {
        // Convert temp as a string to int
        float userCelsiusInt = std::stof(userCelsiusStr);

        // calculation cel to fah
        float fahrenheitTemp = (userCelsiusInt * 9) / 5 + 32;

        // Display the Converted temp
        std::cout << "Temperature in Fahrenheit: " << fahrenheitTemp << "°F\n";
    } catch (std::invalid_argument) {
        // Message for invalid user number
        std::cout << "\n"
                  << userCelsiusStr << " is not a valid temp.\n";
    }
}

int main() {
    // Call the fahrenheit function
    fahrenheit();
}
