// #include <iostream>
// using namespace std;
// int firstOccurrence(int arr[], int n, int key) {
//     int l = 0, r = n - 1;
//     int ans = -1;
//     while (l <= r) {
//         int mid = (l + r) / 2;
//         if (arr[mid] == key) {
//             ans = mid;      // possible answer
//             r = mid - 1;    // keep searching in left part
//         }
//         else if (arr[mid] > key) {
//             r = mid - 1;
//         }
//         else {
//             l = mid + 1;
//         }
//     }
//     return ans;
// }
// int lastOccurrence(int arr[], int n, int key) {
//     int l = 0, r = n - 1;
//     int ans = -1;
//     while (l <= r) {
//         int mid = (l + r) / 2;
//         if (arr[mid] == key) {
//             ans = mid;      // possible answer
//             l = mid + 1;    // keep searching in right part
//         }
//         else if (arr[mid] > key) {
//             r = mid - 1;
//         }
//         else {
//             l = mid + 1;
//         }
//     }
//     return ans;
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     int first = firstOccurrence(arr, n, key);
//     int last = lastOccurrence(arr, n, key);
//     cout << "First occurrence: " << first << endl;
//     cout << "Last occurrence: " << last << endl;
//     return 0;
// }
