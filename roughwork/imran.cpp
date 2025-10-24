/*
Student: Hamza Imran
Date: October 22, 2025
Lab 11: Introduction to Functions
Main program to test all functions
*/

#include <iostream>
using namespace std;
#include "imran_function.cpp"

int main() {
    cout << "\n----- Example 1: void function -----" << endl;
    printhello();

    cout << "\n----- Example 2: void function with parameters -----" << endl;
    string username = "Anna";
    greating("Peter");
    greating(username);
    greating("Carl");

    cout << "\n----- Example 3: function with return value -----" << endl;
    int savefive = returnfive();
    savefive += 2;
    cout << "The returning value after += 2 = \t" << savefive << endl;

    cout << "\n----- Example 4: code after return -----" << endl;
    printsome();    
    int n = somenumber();
    cout << "Some number: \t" << n << endl;

    cout << "\n----- Example 5: area of a square -----" << endl;
    float area_square1 = areasquare(2.5);
    cout << "Area of a square is: \t" << area_square1 << endl;

    cout << "\n----- Example 6: product of two numbers -----" << endl;
    int p = product(2, 3);
    cout << "The product is: \t" << p << endl;

    cout << "\n----- Example 7: Fahrenheit conversion -----" << endl;
    double f = fah(12.5);
    printfah(f);    

    cout << "\n----- Example 8: check a number -----" << endl;
    string checknum = checknumber(-1);
    printnumber(checknum);

    cout << "\n----- LAB EXERCISE: Even Number Check -----" << endl;
    
    // Test the even number functions
    int testNumber;
    cout << "Enter a number to check if it's even: ";
    cin >> testNumber;
    
    bool evenCheck = isEven(testNumber);
    printEvenResult(testNumber, evenCheck);
    
    // Test with multiple numbers
    cout << "\nTesting with multiple numbers:" << endl;
    printEvenResult(4, isEven(4));
    printEvenResult(7, isEven(7));
    printEvenResult(0, isEven(0));
    printEvenResult(-2, isEven(-2));

    return 0;
}


