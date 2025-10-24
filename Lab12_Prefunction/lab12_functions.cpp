/*
Hamza Imran
oct 24, 2025
lab 12: scooping and predfined functions
*/
#include<iostream>
#include<cmath>

using namespace std;

// example 1: function that calculates and returns the sum of two numbers
int add(int num1, int num2){
    int sum = num1 + num2; // sum is a local variable iny
    cout<<"The sum is function add() is \t"<<sum<<endl;
    return sum;
}

// example 3: use predefine
// function passes two argument, calculate and returns the hypotheneus of a right triangle.
float hyp(float side1, float side2){
    return sqrt(pow(side1, 2)+ pow(side2, 2));
}

// function to print result
void printhyp(float s1, float s2,float h){
    cout<<"The hypothenus of side"<<s1<<" and "<<s2<<" is "<<h<<endl;
}

// Exercise
// function to calculate the distance of four point
// function to print the result
