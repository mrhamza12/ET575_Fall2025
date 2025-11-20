/*
Hamza Imran
Nov 20 2025
Functions for array_min & array_avg 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int collect_size(){
    int n;
    cout << "Enter size of array (1-20): ";
    cin  >> n;
    return n;
}

void populate_numbers(int ar[], int s){
    for(int i = 0; i < s; i++){
        ar[i] = rand() % 99 + 1;   // 1-99 inclusive
    }
}

void print_numbers(int ar[], int s){
    for(int i = 0; i < s; i++){
        cout << ar[i] << "\t";
    }
    cout << endl;
}

int array_min(int ar[], int s){
    int minVal = ar[0];
    for(int i = 1; i < s; i++){
        if(ar[i] < minVal) minVal = ar[i];
    }
    return minVal;
}

float array_avg(int ar[], int s){
    int sum = 0;
    for(int i = 0; i < s; i++){
        sum += ar[i];
    }
    return static_cast<float>(sum) / s;
}