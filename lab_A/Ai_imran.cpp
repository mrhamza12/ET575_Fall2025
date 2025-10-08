/*
Hamza Imran
lab_AI1
, 2025
*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the number is positive
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the sum from 1 to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Display the result
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}

// --- AI Assistant Used: Assistant A ---
// Was the code correct? Yes
// Was it readable and properly commented? Yes, the comments clearly explain each section.
// Were you able to explain each line of code? Yes. It includes necessary headers, gets user input, validates it, uses a for-loop for summation (a concept from class), and outputs the result.
// Did it use the same programming concepts we learned in class? Yes (variables, I/O, loops, conditionals).
// Terminal Output:
// Enter a positive integer: 5
// The sum of numbers from 1 to 5 is: 15
//
// Enter a positive integer: -3
// Please enter a positive integer.

//lab_AI2
#include <iostream>
using namespace std;

int main() {
    int user_input;

    cout << "Input a number greater than 0: ";
    cin >> user_input;

    // Using the mathematical formula for sum of first n natural numbers: n(n+1)/2
    int result = (user_input > 0) ? (user_input * (user_input + 1)) / 2 : -1;

    if (result == -1) {
        cerr << "Invalid input. Must be positive." << endl;
    } else {
        cout << "Sum is: " << result << endl;
    }

    return 0;
}

// --- AI Assistant Used: Assistant B ---
// Was the code correct? Mostly. It works for correct input but handles negative input oddly.
// Was it readable and properly commented? Somewhat. It explains the formula but the ternary operator can be less readable for beginners than an if-else.
// Were you able to explain each line of code? Yes, but the logic for error handling (using -1) is less intuitive.
// Did it use the same programming concepts we learned in class? Partially. We learned loops for summation, not the mathematical formula. It uses a ternary operator, which we might not have covered yet.
// Terminal Output:
// Input a number greater than 0: 5
// Sum is: 15
//
// Input a number greater than 0: -3
// Invalid input. Must be positive.


//1. What did the AI assistants get right?
//Both AI assistants correctly solved the core problem of calculating the sum of the first n positive integers. They both included the necessary #include <iostream> and using namespace std; directives. They also both correctly handled user input and output, and both included some form of basic input validation to check for positive numbers.

//2. Was the code based on similar programming concepts taught in class?
//Assistant A's code was perfectly aligned with the concepts taught in a beginner class. It used a for loop to iterate and accumulate a sum, which is the typical pedagogical approach for this problem. Assistant B's code used a more advanced, efficient mathematical formula (n(n+1)/2) and a ternary operator for conditional assignment. While correct and efficient, this approach might not reflect the learning objective of the lab, which is likely to practice using loops.

//3. Did one AI provide a better explanation or code structure than the other? Why?
//Yes, Assistant A provided a better code structure for a beginner. The reasons are:

//Readability: The code is linear and easy to follow. It uses a simple if statement for validation and a standard for loop, which are fundamental concepts that are easy for a beginner to explain and understand.

//Pedagogical Alignment: It solves the problem exactly how an instructor would expect a student to at this level, reinforcing the loop concept.

//Robustness: It handles an error by exiting cleanly with a return code of 1, which is a good practice.

//Assistant B's code, while clever, is less ideal as a learning aid for this specific exercise. Using a formula bypasses the intended practice with loops. The ternary operator (? :) compresses logic into a single line, which can be harder for a novice to parse and explain than a simple if-else block. The choice to assign -1 to represent an error is a valid technique but is less immediate than Assistant A's direct error message and exit.
