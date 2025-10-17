// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++) cin >> arr[i];

//     for(int i=0; i<n-1; i++) {
//         int minIndex = i;
//         for(int j=i+1; j<n; j++) {
//             if(arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[i], arr[minIndex]);
//     }

//     for(int i=0; i<n; i++)
//         cout << arr[i] << " ";
// }
#include <iostream>
using namespace std;

void ss(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++) { // start from i+1
            if (arr[j] < arr[smallestIndex]) { // compare with smallestIndex
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]); // place smallest element at correct position
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ss(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
