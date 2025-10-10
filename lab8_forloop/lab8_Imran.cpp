/*
Hamza Imran
lab8, for loop
Oct 8, 2025
*/
#include<iostream>

using namespace std;
int main(){
    cout<<"\n---- Example 1: for loop----"<<endl;
    // print Hello five times
    for(int action=1; action<=5; action++ ){
        cout<<"Hello "<<action<<endl;

    }

     cout<<"\n---- Example 2: for loop as a decrement counter----"<<endl;
     // print from 9 to 1
     int n = 9;
     for(n; n>=1; n--){
        cout<<n<<"\t";
     }
     cout<<endl;

     cout<<"\n---- Example 3: for loop as an incretment counter----"<<endl;
     // print from 1 to 20 in a step of 3
     for(int m = 1; m<=20; m += 3){
        cout<<m<<"\t"<<endl;
     }
     cout<<endl;
    
     cout<<"\n---- Example 4: for loop with conditional statment----"<<endl;
     // print all number, between -10 and 10, that are multiply of 3
     for(int p = -10; p<=10; p++){
        if(p%3==0 && p!=0){
            cout<<p<<"\t";
        }
     }
     cout<<endl;

     cout << "\n---- Example 5: for loop with conditional statement----" << endl;
     // count all even numbers between 5 to 20
     int even_count = 0;
     for(int p = 5; p <= 20; p++){
     if(p%2==0 && p!=0){
        cout<<p<<"\t";
        even_count++;
        }
     }
     // print result
     cout << "There are " << even_count << " even numbers" << endl;

     cout<<"\n---- Example 6: for loop with conditional statment----"<<endl;
     // add all negative numbers between -8 and 5
     int sum_negative = 0;
     int x = -8;
     for(x ; x<=5; x++){
        if(x<0){
            sum_negative += x;
        }
     }
     //print result
     cout<<"The total sum of negative numbers = "<<sum_negative<<endl;

     cout<<"\n------EXERCISE 1 ----- "<<endl;
     cout<<"\n------EXERCISE 2 ----- "<<endl;
     int user_input = 0;
     cout<<"Enter an intial value ";
     cin>>user_input;

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
