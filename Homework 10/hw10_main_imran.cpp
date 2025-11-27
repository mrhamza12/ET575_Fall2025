/*
Hamza Imran
Nov 27, 2025
Homework 10, file streaming
*/

#include <iostream>
#include "hw10_functions_imran.cpp"
using namespace std;

int main(){

    cout << "\n--- Example 1: Reading a file ---" << endl;
    readFile("Remembering_Earth.txt");

    cout << "\n--- Example 2: Counting words and writing to wordcounts.txt ---" << endl;
    countWords("Remembering_Earth.txt");

    cout << "\n--- Example 3: Counting occurrences of 'Earth' and appending to wordcounts.txt ---" << endl;
    countEarth("Remembering_Earth.txt");

    return 0;
}