/*
Hamza Imran
Nov 20 2025
Homework: array_min & array_avg 
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

#include "hw_array_function_imran.cpp"

int main(){
    srand(time(0));          
    int num = collect_size();
    int a[num];             
    populate_numbers(a, num);
    print_numbers(a, num);
    cout << "Minimum number: \t" << array_min(a, num) << endl;
    cout << "Average of numbers: \t" << array_avg(a, num) << endl;
    return 0;
}