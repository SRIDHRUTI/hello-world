#include "calculator.h"
#include <stdexcept>
#include <iostream>

/**
 * @file calculator.cpp
 * @brief Implementation of the Calculator class.
 * 
 * This file contains the definitions of the methods of the `Calculator` class,
 * such as addition, subtraction, multiplication, and division.
 */

/**
 * @brief Adds two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return double The sum of the two numbers.
 */
double Calculator::add(double a, double b) {
    return a + b;  ///< Return the sum of the two numbers
}

/**
 * @brief Subtracts the second number from the first.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return double The result of subtraction.
 */
double Calculator::subtract(double a, double b) {
    return a - b;  ///< Return the difference between the two numbers
}

/**
 * @brief Multiplies two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return double The product of the two numbers.
 */
double Calculator::multiply(double a, double b) {
    return a * b;  ///< Return the product of the two numbers
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
    return a / b;  ///< Return the result of division
}

#include <iostream>

int main() {
    Calculator calc;  ///< Create a Calculator object

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

    return 0;  ///< Exit the program
}
