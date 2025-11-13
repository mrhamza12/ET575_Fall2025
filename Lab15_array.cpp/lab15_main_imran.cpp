/*
Hamza Imran
Nov 12, 2025
lab 14: introduction to arrays, pointers and references
*/
#include <iostream>
#include <string>
using namespace std;
#include "lab15_function_imran.cpp"

int main() {
    std::cout << "\n-----Example 1: Pointers -----" << std::endl;
    pointer_ref();

    cout << "\n-----Example 2:  reference and pointer in a function -----" << std::endl;
    string something = "Hello World";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);
    printvalue(something);
    printvalue(something);


    std::cout << "\n-----Example 3: Arrays -----" << std::endl;
    arrays();

    std::cout << "\n --- Example 4: array sizes -----" << std::endl;
    sizeofarrays();

    std::cout << "\n --- Example 5: loop in an array  -----" << std::endl;
    looparrays();

    return 0;
}

