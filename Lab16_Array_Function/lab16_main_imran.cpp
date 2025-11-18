/*
Hamza Imran
Lab 16, array in a function
Sep 8, 2025
*/
#include<iostream>
#include "lab16_function_imran.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: collect and populate data into an array -----"<<endl;
    // initalize varables and array
    int arraysize = 3;
    int arrum[arraysize];

    // callling functioin
    fillup(arraysize, arrum);
    printarray(arraysize, arrum);

      cout<<"\n----- Example 2: program to search a number in an array -----"<<endl;
       // initalize varables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;
    int targetnumber = 8;

    // calling functions
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers);
    int resultsearch = search(arr_pos_numbers, listsize, targetnumber);

   printresult(resultsearch, targetnumber);

   cout<<"\n ----- EXERCISE -----"<<endl;
   // initalize varables and array
   int arr_number[] = {6, -10, 9, 12, -3, -8, 5, 7, 4, 4, 0};

   const int exerciseSize = sizeof(arr_number) / sizeof(arr_number[0]);
   cout << "Test Array: ";
   printarray(exerciseSize, arr_number);

   // Test the exercise functions
   int evenSum = sumEvenNumbers(arr_number, exerciseSize);
   int negativeCount = countNegativeNumbers(arr_number, exerciseSize);

   cout << "Sum of all even numbers: " << evenSum << endl;
   cout << "Count of all negative numbers: " << negativeCount << endl;

    return 0;
}