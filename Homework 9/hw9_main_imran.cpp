/*
Hamza Imran
Homework 9, array application
27 Nov 2025
*/

#include <iostream>
#include "hw9_function_imran.cpp"
using namespace std;

int main() {

    // get array size
    int sizearray = arraysize();

    // declare array
    int noise[sizearray];

    // populate array with random values
    randpopulate(noise, sizearray);

    // print original array
    cout << "Original Set:" << endl;
    print(noise, sizearray);

    // reverse the array
    reverse(noise, sizearray);

    // print reversed array
    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray);

    return 0;
}