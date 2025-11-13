#include <iostream>
using namespace std;

int rose(int n) {
    if (n <= 0) {
        return 1;
    }
    else {
        return (rose(n - 1) * n);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The final answer is " << rose(num);
    return 0;
}





