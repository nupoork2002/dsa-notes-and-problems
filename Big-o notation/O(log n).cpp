// 🔹 O(log n) - Logarithmic Time
// Binary Search is a classic example of O(log n) complexity.
// The input size is halved at each step.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, n - 1, target);
    (result == -1) ? cout << "Element not found\n" : cout << "Element found at index " << result << endl;
    
    return 0;
}
// Each step cuts the input size in half, making it much faster than O(n).