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
    int x1 = getPositiveNumber();
    int y1 = getPositiveNumber();
    int x2 = getPositiveNumber();
    int y2 = getPositiveNumber();

    float d = calcDistance(x1, y1, x2, y2);
    printDistance(x1, y1, x2, y2, d);





    return 0;
}