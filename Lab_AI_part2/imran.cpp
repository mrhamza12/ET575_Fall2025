/*
Hamza Imran
Lab AI PRT 2
OCT 10, 2025
*/
#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, converted;

    // Ask user for conversion type
    cout << "Choose conversion type:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Perform conversion based on user choice
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (1.8 * temp) + 32;
        cout << temp << "°C is " << converted << "°F" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (5.0 / 9.0) * (temp - 32);
        cout << temp << "°F is " << converted << "°C" << endl;
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}

/*
Reflection Questions:

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// Answer: No, the code uses basic concepts like variables, input/output, and if/else statements which I’ve learned in class.

// 2. Are there any issues or improvements you noticed? Explain.
// Answer: The original AI code only handled one conversion. I added a menu and conditional logic to support both conversions.

// 3. What test cases did you try, and why? Explain.
// Answer: I tested 0°C (should be 32°F), 100°C (should be 212°F), and 98.6°F (should be ~37°C) to verify both conversions work correctly.
*/
