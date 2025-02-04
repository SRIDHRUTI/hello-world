#include "calculator.h"
#include <stdexcept>
#include <iostream>

/**
 * @file calculator.cpp
 * @brief Implementation of the Calculator class.
 * 
 * This file contains the definitions of the methods of the `Calculator` class,
 * such as addition, subtraction, multiplication, division, and squaring.
 */

/**
 * @brief Adds two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return double The sum of the two numbers.
 */
double Calculator::add(double a, double b) {
    return a + b;
}

/**
 * @brief Subtracts the second number from the first.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return double The result of subtraction.
 */
double Calculator::subtract(double a, double b) {
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return double The product of the two numbers.
 */
double Calculator::multiply(double a, double b) {
    return a * b;
}

/**
 * @brief Divides the first number by the second.
 * 
 * @param a The numerator.
 * @param b The denominator.
 * @return double The result of division.
 * @throws std::invalid_argument if dividing by zero.
 */
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return a / b;
}

/**
 * @brief Squares a number.
 * 
 * @param a The number to square.
 * @return double The square of the number.
 */
double Calculator::square(double a) {
    return a * a;
}

#include <iostream>

int main() {
    Calculator calc;

    double num1 = 10.0, num2 = 5.0;

    // Perform addition
    std::cout << "Addition: " << calc.add(num1, num2) << std::endl;

    // Perform subtraction
    std::cout << "Subtraction: " << calc.subtract(num1, num2) << std::endl;

    // Perform multiplication
    std::cout << "Multiplication: " << calc.multiply(num1, num2) << std::endl;

    // Perform division
    try {
        std::cout << "Division: " << calc.divide(num1, num2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    // Perform squaring
    std::cout << "Square of " << num1 << ": " << calc.square(num1) << std::endl;
    std::cout << "Square of " << num2 << ": " << calc.square(num2) << std::endl;

    return 0;
}
