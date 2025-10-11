
    
    // Exercise 1
    cout << "=== EXERCISE 1 ===" << endl;
    cout << "Decrementing from 21 to -21 by 5, counting multiples of 2" << endl;
    
    int countMultiples = 0;
    
    for (int i = 21; i >= -21; i -= 5) {
        cout << "Counter = " << i;
        
        // Check if current value is multiple of 2
        if (i % 2 == 0) {
            cout << " (multiple of 2)";
            countMultiples++;
        }
        cout << endl;
    }
    
    cout << "Total multiples of 2: " << countMultiples << endl;
    cout << endl;
    
    // Exercise 2
    cout << "=== EXERCISE 2 ===" << endl;
    
    int startValue;
    
    // Get user input for start value
    cout << "Enter the starting value: ";
    cin >> startValue;
    
    cout << "Counting from " << startValue << " to 30 with increment of 4:" << endl;
    
    for (int i = startValue; i <= 30; i += 4) {
        cout << "Counter = " << i << endl;
    }
    
    return 0;
}