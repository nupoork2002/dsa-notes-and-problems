// 🔹 O(n²) - Quadratic Time
// Nested loops lead to O(n²) complexity.

#include <iostream>
using namespace std;

void printPairs(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Outer loop (runs n times)
        // Inner loop (runs n times)
        for (int j = 0; j < n; j++) {  // Nested loop
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculates number of elements
    printPairs(arr, size); // O(n²) // Calls function
    return 0;
}
//  If n doubles, execution time increases 4x (quadratic growth).
// ✅ Quadratic time complexity O(n²) happens when a loop is nested inside another loop.

// CODE EXPLINATION
//  Defined a void function printPairs(int arr[], int n) that takes an integer array and its size as parameters.
//  Used an outer loop (i = 0 to n-1) that runs n times.
//  Inside the outer loop, used an inner loop (j = 0 to n-1) that also runs n times.
// The inner loop prints all possible pairs (arr[i], arr[j]).
//  In main():
// Declared an array arr[] = {1,2,3}.
// Calculated its size using sizeof(arr) / sizeof(arr[0]).
// Called printPairs(arr, size).
//  Since the nested loop runs n * n times, the time complexity is O(n²).
// For n = 3, there are 3 × 3 = 9 pairs. If n = 4, we would get 4 × 4 = 16 pairs.

