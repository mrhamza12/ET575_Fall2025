/*
Hamza Imran
Nov 20 2025
Homework 8: 2D array 
*/
#include <iostream>
using namespace std;

#include "hw8_function_imran.cpp"

const int ROWCOL_ARRAY = 4;

int main(){
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int target;
    cout << "Enter value to search: ";
    cin  >> target;

    int pos[2];               
    search_value(ar, target, pos);

    display_message(target, pos);

    return 0;
}