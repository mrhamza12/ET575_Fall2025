/*
Hamza Imran
Homework 9, array application
27 Nov 2025
*/

#include <iostream>
using namespace std;

// function to get array size between 1 and 100
int arraysize() {
    int size;

    do {
        cout << "Enter an array size between 1 and 100: ";
        cin >> size;
    } while (size < 1 || size > 100);

    return size;
}

// function to populate the array with random numbers (10–30)
void randpopulate(int arr[], int sizearray) {
    for (int i = 0; i < sizearray; i++) {
        arr[i] = rand() % 21 + 10; // random number 10–30
    }
}

// function to print all values in the array
void print(const int arr[], int sizearray) {
    for (int i = 0; i < sizearray; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// function to reverse the array by swapping values
void reverse(int arr[], int sizearray) {
    int start = 0;
    int end = sizearray - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}