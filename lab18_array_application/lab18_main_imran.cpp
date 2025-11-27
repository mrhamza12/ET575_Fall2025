/*
Hamza Imran
Lab 18: Array Application
27 Nov, 2025
*/

#include <iostream>
#include "lab18_function_imran.cpp"
using namespace std;

int main(){

    cout << "----- LAB 18: ARRAY APPLICATION -----" << endl;

    const int SIZE = 5;
    int arr[SIZE];
    int count = 0;

    // Step 1: Collect numbers
    collectnumber(arr, count);

    // Step 2: Compute average
    double avg = Averagenumber(arr, count);

    // Step 3: Find closest number to the average
    int closest = Closestmean(arr, count, avg);

    // Step 4: Print results
    Printresult(avg, closest);

    return 0;
}