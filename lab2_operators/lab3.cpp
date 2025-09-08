/*
Srudent's full name 
Lab 2, operators
Sep 2, 2025
*/
#include<iostream>

using namespace std;

int main (){
    cout<<"\n-----example 1: arithmetic operator ------"<<endl;
    // set number format
    cout.precision(3);
    // calculate the height of a free falling object
   //free_fall = 0.5 * gravity * time * time; // Calculate free fall height
   //declare the contant variable name 'gravity'
   const float Gravity = 9.8;
   // declare variable height and time 
   float height=0 , time=0;
   // COLLECT THE FALLING TIME
   cout<<"ENTER A FALLING TIME ";
   cin>>time;
    // calculate the height of a free fall object 
    height = 0.5 * Gravity * time * time;
    //PRINT RESULTS 
    cout<<"THE HEIGHT OF THE FREE fall object at "<<time<<" seconds is "<<height<<endl;

        cout<<"\n-----example 2: assignment operator ------"<<endl;
        int number1 = 10;
        int number2 = 3;
        cout<<"original number1 ="<<number1<<endl;
        number1++;
        cout<<"update number1 ="<<number1<<endl;
        cout<<"original number2 ="<<number2<<endl;
        number2--;
        cout<<"update number2 ="<<number2<<endl;
        number2+=5;
        cout<<"update number2 ="<<number2<<endl;
        number1 *=2;
        cout<<"update number1 using *=2 --> "<<number1<<endl;

        cout<<"The remainder of "<<number1<<" and "<<number2<<" is "<<number1%number2<<endl;
        cout<<"number1 = "<<number1<<endl;
        cout<<"number2 = "<<number2<<endl;
        
        number1 %= number2;
        cout<<"after %=,number1 ="<<number1<<endl;
        cout<<"after %=,number2 ="<<number2<<endl; 

        cout<<"\n-----example 3: comparison operator ------"<<endl;
        cout<<"is number1 equal to number2? "<<(number1==number2)<<endl;
        cout<<"is number1 less then number2? "<<(number1 < number2)<<endl;
        cout<<"is number1 not equal to number2? "<<(number1 != number2)<<endl;


        cout<<"\n-----example 4: logical operator ------"<<endl;
        //AND operator
        bool check_numbers = (number1 != number2) && (number1 < number2) && (number1 > 5);
        // number != number2 --> true
        // number1 < number2 --> true
        // number1 > 5 --> false
        // check_numbers = true && true && false = false
        cout<<"The result of check_number is "<<check_numbers<<endl;

        //OR operator
        bool check_or = (number2> 0)|| (number2 != 3) || (number2<number1);
        // number2> 10 --> false
        // number2 != 3 --> true
        // number2<number1 --> false
        //false || true || false = true
        cout<<"The result of check_or is "<<check_or<<endl;
        

        cout<<"\n-----example 5: casting ------"<<endl;
        int n = 5;
        float m =n/2.0;
        
        cout<<"implicit casting = "<<m/2<<endl;
    return 0;
}

//Homework

#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operations
    int a, b;
    
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    
    cout << "\nArithmetic Operations:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    
    // Assignment Operations
    a += 10;
    b -= 5;
    
    cout << "\nAfter assignment operations:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    // Boolean (logical) Operations
    cout << "\nBoolean Operations:" << endl;
    cout << "Is a greater than b? " << boolalpha << (a > b) << endl;
    cout << "Is a equal to b? " << boolalpha << (a == b) << endl;
    cout << "Is a not equal to b? " << boolalpha << (a != b) << endl;
    cout << "Are both a and b positive? " << boolalpha << (a > 0 && b > 0) << endl;
    cout << "Is either a or b negative? " << boolalpha << (a < 0 || b < 0) << endl;
    cout << "Is a not greater than b? " << boolalpha << (!(a > b)) << endl;
    
    return 0;
}
