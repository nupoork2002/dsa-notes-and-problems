// 🔹 O(1) - Constant Time
// The runtime does not depend on the input size.
// Example: Accessing an element in an array.

#include <iostream>
using namespace std;

void getFirstElement(int arr[]) {
    cout << arr[0] << endl; // takes the same time
}

int main() {
    int arr[] = {10,20,30,40,50};
    getFirstElement(arr);
    return 0;
}
// Performance stays the same no matter how large arr is.

// CODE EXPLANATION
// 1. Defined a void function `getFirstElement(int arr[])` that takes an integer array as an input parameter.
// 2. Printed the first element of the array using `arr[0]`, since array indexing starts from 0.
// 3. In the `main()` function, declared an integer array `arr[] = {10, 20, 30, 40, 50}` with sample values.
// 4. Called the `getFirstElement(arr)` function to print the first element of the array.
// 5. Returned `0` to indicate successful program execution.
// 6. The function runs in O(1) time complexity, meaning the execution time remains constant,  
// regardless of the array size. Whether the array has 5 or 5 million elements, performance remains the same.