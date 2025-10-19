/*
Hamza Imran
Homework 4: Loops
*/

#include <iostream>
using namespace std;

// Global variable for Question 3
const int dimension = 11;

int main() {
    
    // Question 1: Number validation using do-while loop
    cout << "--- Question 1 ---" << endl;
    int number;
    
    do {
        cout << "Enter a number: ";
        cin >> number;
        
        if (number < 10) {
            cout << number << " is invalid! Please enter a number greater than 10: ";
        }
    } while (number < 10);
    
    cout << number << " is a valid number!" << endl << endl;
    
    // Question 2: Print numbers from min to max using while loop
    cout << "--- Question 2 ---" << endl;
    int num1, num2;
    
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    
    int min, max;
    if (num1 < num2) {
        min = num1;
        max = num2;
    } else {
        min = num2;
        max = num1;
    }
    
    cout << "\nRESULT = ";
    int current = min;
    while (current <= max) {
        cout << current << " ";
        current++;
    }
    cout << endl << endl;
    
    // Question 3: Print letter 'r' using nested for loops
    cout << "--- Question 3 ---" << endl;
    
    for (int row = 1; row <= dimension; row++) {
        for (int col = 1; col <= dimension; col++) {
            // Conditions to form the letter 'r'
            if (col == 1) {  // Vertical stem
                cout << "# ";
            } else if (row == 1 && col <= dimension/2 + 1) {  // Top horizontal
                cout << "# ";
            } else if (row == dimension/2 + 1 && col <= dimension/2 + 1) {  // Middle horizontal
                cout << "# ";
            } else if (col == dimension/2 + 1 && row <= dimension/2 + 1) {  // Right vertical
                cout << "# ";
            } else if (row > dimension/2 + 1 && col == row) {  // Diagonal part
                cout << "# ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}