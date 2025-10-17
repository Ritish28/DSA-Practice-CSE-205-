    // // [1  7 9 8 2] key = 3
    // #include <iostream>
    // #include <vector>
    // using namespace std;

    // void rotateArray(vector<int> &arr, int k) {
    //     int n = arr.size();
    //     k = k % n; // Handle cases where k > n
    //     // Reverse the entire array
    //     reverse(arr.begin(), arr.end());
    //     // Reverse first k elements
    //     reverse(arr.begin(), arr.begin() + k);
    //     // Reverse remaining n-k elements
    //     reverse(arr.begin() + k, arr.end());
    // }

    // int main() {
    //     int n, k;
    //     cout << "Enter number of elements: ";
    //     cin >> n;

    //     vector<int> arr(n);
    //     cout << "Enter elements: ";
    //     for (int i = 0; i < n; i++) {
    //         cin >> arr[i];
    //     }

    //     cout << "Enter k (rotation count): ";
    //     cin >> k;

    //     rotateArray(arr, k);

    //     cout << "Array after rotation: ";
    //     for (int num : arr) {
    //         cout << num << " ";
    //     }
    //     cout << endl;

    //     return 0;
    // }
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle case where k > n
    reverse(arr, 0, n - 1);       // Reverse entire array
    reverse(arr, 0, k - 1);       // Reverse first k elements
    reverse(arr, k, n - 1);       // Reverse remaining elements
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k (rotation count): ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
