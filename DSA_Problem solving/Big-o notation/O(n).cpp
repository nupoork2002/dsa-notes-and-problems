// 🔹 O(n) - Linear Time
// A loop that runs through n elements has O(n) complexity.

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) { // Loops through n elements
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculates array size
     cout << "Total elements in the array: " << size << endl; // Print only the count
    printArray(arr, size); // Calls the function
    return 0;
}

// if the input size doubles, execution time also doubles.

/ CODE EXPLANATION
// 1. Defined a void function `printArray(int arr[], int n)` that takes an integer array  & integer n var as an input parameter.
// 2. created a for loop for looping through n elements
// 3. printed the array i element
// 4. then in the main function declared arr [] values
// 5. divided the values of size of arr with size of arr[0]
// 6. called the void function with its arr and size
// here in linear time O(n) if the input times doubles the order of excution of running an programm will also run because as the size increase it goes one by one and then exuctes it