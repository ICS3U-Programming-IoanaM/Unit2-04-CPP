// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Oct. 4, 2022
// calculates the cost of a pizza

#include <iomanip>
#include <iostream>

int main() {
    // declare constants
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.50;
    const float TAX_RATE = 0.13;

    // declare variables
    int diameter;
    float subtotal, tax, total;

    // get the user input
    std::cout << "Enter diameter (cm): ";
    std::cin >> diameter;

    // calculate subtotal, tax and the total
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // display total
    std::cout << "The total with HST is: $" << std::fixed;
    std::cout << std::setprecision(2) << std::setfill('0') << total << "\n";
}
