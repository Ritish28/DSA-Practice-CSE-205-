// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     // input elements
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
// // arr=[12,324,32,34,10]
//     // bubble sort logic
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - i - 1; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 // swap elements
//                 // int temp = arr[j];
//                 // arr[j] = arr[j + 1];
//                 // arr[j + 1] = temp;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     // output sorted array
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
void bs(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // outer loop
        for (int j = 0; j < n - i - 1; j++) { // inner loop
            if (arr[j] > arr[j + 1]) { // compare adjacent elements
                swap(arr[j], arr[j + 1]); // swap if needed
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bs(arr, n); // pass array and size properly

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}