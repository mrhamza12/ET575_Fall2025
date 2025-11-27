/*
Hamza Imran
Lab 18: Array Application
27 Nov, 2025
*/

#include <iostream>
using namespace std;


void collectnumber(int arr[], int &count){
    int number;
    count = 0;

    do{
        cout << "Enter a non-zero number (0 to stop): ";
        cin >> number;

        if(number != 0){
            arr[count] = number;
            count++;
        }

    }while(number != 0 && count < 5);
}


double Averagenumber(const int arr[], int count){
    int sum = 0;

    for(int i = 0; i < count; i++){
        sum += arr[i];
    }

    return static_cast<double>(sum) / count;
}


int Closestmean(const int arr[], int count, double avg){
    int closest = arr[0];
    double minDiff = abs(arr[0] - avg);

    for(int i = 1; i < count; i++){
        double diff = abs(arr[i] - avg);

        if(diff < minDiff){
            minDiff = diff;
            closest = arr[i];
        }
    }
    return closest;
}


void Printresult(double avg, int closest){
    cout << "The closest number to average " << avg << " is " << closest << "." << endl;
}