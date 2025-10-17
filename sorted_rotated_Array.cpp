#include <iostream>
using namespace std;

// Function to search key in rotated sorted array
int search(int arr[], int n, int key) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == key)
            return mid;

        // Left half is sorted
        if (arr[l] <= arr[mid]) {
            if (key >= arr[l] && key < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        // Right half is sorted
        else {
            if (key > arr[mid] && key <= arr[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }

    return -1; // not found
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    int idx = search(arr, n, key);
    if (idx != -1)
        cout << "Found at index " << idx;
    else
        cout << "Not found";

    return 0;
}

