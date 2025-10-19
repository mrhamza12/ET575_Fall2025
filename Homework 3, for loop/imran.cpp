/*
Hamza Imran
Homework 3 - for loop
*/

#include <iostream>
using namespace std;

int main() {
    // Program 1: Count positive, negative, and zero numbers
    cout << "=== PROGRAM 1 ===" << endl;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    double number;
    
    cout << "Enter 10 numbers:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        
        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    
    cout << "\nResults:" << endl;
    cout << "Total positive numbers = " << positiveCount << endl;
    cout << "Total negative numbers = " << negativeCount << endl;
    cout << "Total zeros = " << zeroCount << endl;
    
    cout << "\n=== PROGRAM 2 ===" << endl;
    // Program 2: Sales calculation
    int days;
    double dailySales, totalSales = 0.0, averageSales;
    
    cout << "Enter the number of days: ";
    cin >> days;
    
    for (int day = 1; day <= days; day++) {
        cout << "Enter sales for day " << day << ": $";
        cin >> dailySales;
        totalSales += dailySales;
    }
    
    averageSales = totalSales / days;
    
    cout << "\nTotal sales $" << totalSales << " for " << days << " days.";
    cout << " Average daily sales $" << averageSales << endl;
    
    return 0;
}