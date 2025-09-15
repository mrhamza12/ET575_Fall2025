/*
Hamza Imran
lab5, control flow 
sep15,2025
*/
#include <iostream>
using namespace std;

int main() 
{
    cout<<"\n ----- example 1: nested conditional satement -----"<<endl;
    int n = 5;
    if (n>0){
        if(n%2==0){
            cout<<" The number is Posative and Evevn";
        }
        cout<<"The number is Positive and. ODD"<<endl;

    }
    else if(n<0){
        cout<<"The number is Negative and even"<<endl;

    }
    else{
        if(n%2==0){
            cout<<"The number is zero"<<endl;

        }
        
   }
    cout<<"\n ----- example 2: organize three numbers in decreasing order -----"<<endl;
    // declare the indentifiers (varible names)
    int num1, num2, num3;

    // display a message and collect the three numbers
    cout<<"enter three number: "<<endl;
    cin>>num1>>num2>>num3;
    /// check if num1 is greater than num2 and num3
    if(num1 > num2 && num1 > num3){
        if(num2 > num3)
            cout << num1 << "\t" << num2 << "\t" << num3 << endl;
        else
            cout << num1 << "\t" << num3 << "\t" << num2 << endl;
    }
    // check if num2 is the greatest
    else if(num2 > num1 && num2 > num3){
        if(num1 > num3)
            cout << num2 << "\t" << num1 << "\t" << num3 << endl;
        else
            cout << num2 << "\t" << num3 << "\t" << num1 << endl;
    }
    // check if num3 is the greatest
    else if(num3 > num2 && num3 > num1){
        if(num1 > num2)
            cout << num3 << "\t" << num1 << "\t" << num2 << endl;
        else
            cout << num3 << "\t" << num2 << "\t" << num1 << endl;
    }
    else{
        cout << "All three numbers are the same!" << endl;
    }
    cout<<"\n ----- example 3: switch  -----"<<endl;
    // select a day-off using switch-case statment
    int dayoff;
    cout<<"select a day-off: "<<endl;
    cout<<"1 for monday"<<endl;
    cout<<"2 for tuesday"<<endl;
    cout<<"3 for wednesday"<<endl;
    cout<<"4 for thursday"<<endl;
    cout<<"5 for friday"<<endl;
    cin>>dayoff;

    switch (dayoff)
    {
    case 1:
        cout<<"You are off on monday"<<endl;
        break;
    case 2:
        cout<<"You are off on tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off on wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off on thursday"<<endl;
        break;
    case 5:
        cout<<"You are off on friday"<<endl;
        break;
    default:
        cout<<"Unable to read the day-off"<<endl;
        break;
    }

    cout<<"\n ----- example 4: switch to select a gender -----"<<endl;
    char gender= ' ';
    cout<<"Select a gender: "<<endl;
    cout<<" m or M for male"<<endl;
    cout<<" f or F for female"<<endl;
    cout<<" o or O for other"<<endl;
    cin>>gender;

    switch (gender)
    {
    case 'm' : case 'M' :
        cout<<"Gender = Male"<<endl;
        break;
    case 'f' : case 'F' :
        cout<<"gender = Female"<<endl;
        break;
    case 'o' : case 'O' :
        cout<<"Gender = other "<<endl;
        break;
    
    default:
        cout<<"Gender = UNDEFINED"<<endl;
        break;
    }
    cout<<"\n ----- exerice 1 ";
    return 0;
}