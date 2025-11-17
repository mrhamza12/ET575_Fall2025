/*
 Hamza Imran
 Nov 12, 2025
 Lab 14: introduction to array, pointers and references
*/

#include <iostream>
#include <string>
using namespace std;

#include "lab15_function_imran.cpp"

int main(){

    cout << "\n------ Example 1: pointers ------" << endl;
    pointer_ref();

    cout << "\n------ Example 2: pointers and reference in a function ------" << endl;
    string something = "Hello World!";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);
    printvalue(something);
    printvalue(something);

    cout << "\n------ Example 3: array ------" << endl;
    arrays();

    cout << "\n------ Example 4: array sizes ------" << endl;
    sizeofarrays();

    cout << "\n------ Example 5: loop in an array ------" << endl;
    looparray();

    cout << "\n------ LAB EXERCISE ------" << endl;
    exercise();

    return 0;
}


