/*
Hamza Imran
Sep 15, 2025
Lab 7: Simple Calculator Program using switch-case statement
*/
#include <iostream>

using namespace std;

int main() {
    cout << "\n------ Lab 7: Simple Calculator Program ----- " << endl;
    
    // Declare variables
    double firstNumber, secondNumber;
    char operation;
    
    // Get input from user
    cout << "Enter the first number: ";
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    cin >> secondNumber;
    
    cout << "Choose an operation (+, -, *, /, %, q to quit): ";
    cin >> operation;
    
    // Perform calculation based on user's choice using switch statement
    switch(operation) {
        case '+':
            cout << "Result: " << firstNumber << " + " << secondNumber << " = " 
                 << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << "Result: " << firstNumber << " - " << secondNumber << " = " 
                 << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << "Result: " << firstNumber << " * " << secondNumber << " = " 
                 << firstNumber * secondNumber << endl;
            break;
        case '/':
            // Check for division by zero
            if(secondNumber != 0) {
                cout << "Result: " << firstNumber << " / " << secondNumber << " = " 
                     << firstNumber / secondNumber << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case '%':
            // Modulus operation requires integers
            if(static_cast<int>(secondNumber) != 0) {
                cout << "Result: " << static_cast<int>(firstNumber) << " % " 
                     << static_cast<int>(secondNumber) << " = " 
                     << static_cast<int>(firstNumber) % static_cast<int>(secondNumber) << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case 'q':
        case 'Q':
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Error: Invalid operation selected!" << endl;
            break;
    }
    
    return 0;
}