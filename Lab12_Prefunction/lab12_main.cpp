/*
Hamza Imran
oct 24, 2025
lab 12: scooping and predfined functions
*/
#include<iostream>
using namespace std;

// globel variables
int num = 8;

void doSomething(){
    //global variable
    num += 20;
    cout<<"num in doSomething function: "<<num<<endl;
}

#include "lab12_functions.cpp"

int main(){
    cout<<"\n ----- example 1: local variables ----- "<<endl;
    int sum = add(2,7) + add(1,6); //sum is the local variable in function 
    cout<<"The total sum in main \t"<<sum<<endl;

     cout<<"\n ----- example 2: Globel variables ----- "<<endl;
     cout<<"num orignal value = \t"<<num<<endl;
     doSomething();
     num = 5;
     cout<<"num in main function = \t"<<num<<endl;

     cout<<"\n ----- example 3: hypotenuse ----- "<<endl;
     float s1 = 2;
     float s2 = 3;
     float h = hyp(s1,s2);
     printhyp(s1, s2, h);

     cout<<"------ Exercise -------"<<endl;
     int x1 = // call 1st function
     int y1 = // call 1st function
     int x2 = // call 1st function
     int y2 = // call 1st function

     float d = // call 2nd function

     // call 3nd function





    return 0;
}