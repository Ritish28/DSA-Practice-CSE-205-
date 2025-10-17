#include<iostream>
#include<algorithm>  // For sorting
using namespace std;
int main() {
    int n, m;
    cin >> n;
    int arr[n];  // First array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    int arr2[m];  // Second array
    for (int j = 0; j < m; j++) {
        cin >> arr2[j];
    }
    int arr3[n + m];  // Resultant array for the union
    int i = 0, j = 0, k = 0;
    // Merge the arrays while both i and j are within bounds
    while (i < n && j < m) {
        if (arr[i] < arr2[j]) {
            arr3[k] = arr[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Add remaining elements from arr if any
    while (i < n) {
        arr3[k] = arr[i];
        i++;
        k++;
    }
    // Add remaining elements from arr2 if any
    while (j < m) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    // Sort the merged array in ascending order
    sort(arr3, arr3 + n + m);
    // Output the sorted merged array
    for (int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;   
    return 0;
}
//with pointers check numbers