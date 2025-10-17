#include <iostream>
#include <cmath>  // For abs()
using namespace std;

int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int val = abs(arr[i]);   // Get the absolute value of the current element
        int idx = val - 1;       // Convert the value to an index (val - 1)

        // If the element at the index is negative, it means we've seen this value before
        if (arr[idx] < 0) {
            return val;  // The first repeating element
        }

        // Mark the element at the index by making it negative
        arr[idx] = -arr[idx];
    }

    return -1;  // No repeating element found
}

int main() {
    int n;
    cin >> n;  // Input size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }

    int result = findFirstRepeating(arr, n);
    if (result != -1) {
        cout << "First repeating element: " << result << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }

    return 0;
}
