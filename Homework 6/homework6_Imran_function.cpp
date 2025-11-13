/*
Hamza imran
Homework 6 – Functions and Introduction to Pointers and Reference
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// Function 1
int rand_side() {
    return 1 + rand() % 20;
}

// Function 2
double hyp(int side1, int side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// Function 3
void print_result(int side1, int side2, double hypotenuse) {
    cout << fixed << setprecision(2);
    cout << "The hypotenuse of a right angle with side "
         << side1 << " and " << side2
         << " is = " << hypotenuse << endl;
}

// Main
int main() {
    int side1 = rand_side();
    int side2 = rand_side();
    double hypotenuse = hyp(side1, side2);
    print_result(side1, side2, hypotenuse);
    return 0;
}
