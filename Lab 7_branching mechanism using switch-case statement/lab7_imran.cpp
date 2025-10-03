/*
Hamza Imran
Sep 15, 2025
Lab 7: Simple Calculator Program using switch-case statement
*/
#include <iostream>

using namespace std;

int main() {
    cout<<"\n------ Lab Exercise: Simple Calculator ----- "<<endl;
    
    // Declare variables for the calculator
    double num1, num2;
    char operation;
    
    // Prompt user to enter the first number
    cout<<"Enter the first number: ";
    cin>>num1;
    
    // Prompt user to enter the second number  
    cout<<"Enter the second number: ";
    cin>>num2;
    
    // Ask user to choose an operation
    cout<<"Choose an operation (+, -, *, /, %, q to quit): ";
    cin>>operation;
    
    // Use switch-case statement to perform the operation
    switch(operation){
        case '+':
            cout<<"Result: "<<num1<<" + "<<num2<<" = "<<(num1 + num2)<<endl;
            break;
            
        case '-':
            cout<<"Result: "<<num1<<" - "<<num2<<" = "<<(num1 - num2)<<endl;
            break;
            
        case '*':
            cout<<"Result: "<<num1<<" * "<<num2<<" = "<<(num1 * num2)<<endl;
            break;
            
        case '/':
            // Check for division by zero
            if(num2 != 0){
                cout<<"Result: "<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl;
            }
            else{
                cout<<"Error: Division by zero is not allowed!"<<endl;
            }
            break;
            
        case '%':
            // Modulus operation - check for division by zero and ensure integers
            if(num2 != 0){
                // Convert to integers for modulus operation
                int int_num1 = (int)num1;
                int int_num2 = (int)num2;
                cout<<"Result: "<<int_num1<<" % "<<int_num2<<" = "<<(int_num1 % int_num2)<<endl;
            }
            else{
                cout<<"Error: Modulus by zero is not allowed!"<<endl;
            }
            break;
            
        case 'q': case 'Q':
            cout<<"Exiting the program. Goodbye!"<<endl;
            break;
            
        default:
            cout<<"Error: Invalid operation entered!"<<endl;
            break;
    }
    
    return 0;
}