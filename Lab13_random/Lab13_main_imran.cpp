/*
Hamza Imran
Oct 27, 2025
lab 13: random variables
*/

#include<iostream>
#include "Lab13_function_imran.cpp"

using namespace std;

int main(){
    cout<<"\n ----- Example 1: random number ----- "<<endl;
    int r = random_number();
    cout<<" Random number = "<<endl;

    cout<<"\n ----- Example 2: Different random number ----- "<<endl;
    int diff_random = different_random();
    cout<<" Different random number "<<diff_random<<endl;


    cout<<"\n ----- Example 3:  Random number between 0to 9 ----- "<<endl;
    int r_0_9 = random_0_9();
    cout<<"Number between 0 to 9: \t" <<r_0_9<<endl;


    cout<<"\n ----- Example 4:  Random number between -10 to 5 ----- "<<endl;
    cout<<"Number between -10 to 5: \t" <<random_neg10_5<<endl;

    cout<<"\n ----- EXERCISE -----"<<endl;
    int run1 = random_1_6();
    int run2 = random_1_6();

    // call funtion to check for snake_eyes
    bool result = compare_once(run1, run2);

    // call function to print result
    printresult(result);

    return 0;
}