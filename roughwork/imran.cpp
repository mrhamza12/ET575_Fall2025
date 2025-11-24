
#include <stdio.h>

// Function to count numbers not in range -5 to 5
int myanalysis(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < -5 || arr[i] > 5) {
            count++;
        }
    }
    return count;
}

// Function to print the result
void printresult(int count) {
    printf("There are %d numbers that are not in the range -5 and 5\n", count);
}

int main() {
    int arr[] = { -10, -3, 0, 6, 15 };
    int x = sizeof(arr) / sizeof(arr[0]);
    int count = myanalysis(arr, x);
    printresult(count);
    
    return 0;
}





