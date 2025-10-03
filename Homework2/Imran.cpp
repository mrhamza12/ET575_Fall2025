/* Homework 2: Branching 
Hamza Imran 
*/

#include <iostream>
using namespace std;

int main() {
    // Program 1: Age Eligibility
    cout << "=== Program 1: Age Eligibility ===" << endl;
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    // Check if age is invalid (negative or too large)
    if (age < 0) {
        cout << "Invalid age. Please enter a valid age." << endl;
    }
    else if (age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    }
    // Check age ranges for eligibility
    else if (age < 13) {
        cout << "Not eligible for any activities." << endl;
    }
    else if (age <= 17) {  // age is between 13-17
        cout << "Eligible for youth activities." << endl;
    }
    else if (age <= 64) {  // age is between 18-64
        cout << "Eligible for adult activities." << endl;
    }
    else {  // age is 65 or older
        cout << "Eligible for senior activities." << endl;
    }
    
    cout << endl;
    
    // Program 2: Nested Conditional Statement
    cout << "=== Program 2: Nested Conditional Statement ===" << endl;
    
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int sum = num1 + num2;
    
    // Check different ranges for the sum
    if (sum < 0) {
        cout << "False alarm! The sum is " << sum << endl;
    }
    else if (sum >= 1 && sum <= 100) {
        // Nested condition: check if multiple of 5
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        }
        // Nested condition: check if odd number
        else if (sum % 2 == 1) {
            cout << sum << " is an odd guess" << endl;
        }
    }
    else if (sum >= 101 && sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    }
    else if (sum >= 201 && sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    }
    else { // sum is 1000 or more
        // Nested condition: check if even number
        if (sum % 2 == 0) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        }
        // Nested condition: check if 2000 or more
        if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        }
    }
    
    cout << endl;
    
    // Program 3: Temperature Converter
    cout << "=== Program 3: Temperature Converter ===" << endl;
    
    int choice;
    double temperature, result;
    
    // Display menu options
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Kelvin to Celsius" << endl;
    cout << "4. Kelvin to Fahrenheit" << endl;
    cout << "5. Exit" << endl;
    cout << "Select an option (1-5): ";
    cin >> choice;
    
    // Use switch-case for menu selection
    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            result = temperature * 9 / 5 + 32;
            cout << temperature << " Celsius is equal to " << result << " Fahrenheit" << endl;
            break;
            
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            result = (temperature - 32) * 5 / 9;
            cout << temperature << " Fahrenheit is equal to " << result << " Celsius" << endl;
            break;
            
        case 3:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            result = temperature - 273.15;
            cout << temperature << " Kelvin is equal to " << result << " Celsius" << endl;
            break;
            
        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            result = (temperature - 273.15) * 9 / 5 + 32;
            cout << temperature << " Kelvin is equal to " << result << " Fahrenheit" << endl;
            break;
            
        case 5:
            cout << "Goodbye!" << endl;
            break;
            
        default:
            cout << "Invalid choice. Please select 1-5." << endl;
            break;
    }
    
    return 0;
}