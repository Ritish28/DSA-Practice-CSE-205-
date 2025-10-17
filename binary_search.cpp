// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key) {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key)
//             return mid; // found

//         else if (arr[mid] < key)
//             low = mid + 1; // search right half

//         else
//             high = mid - 1; // search left half
//     }
//     return -1; // not found
// }

// int main() {
//     int n, key;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter sorted elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Enter element to search: ";
//     cin >> key;

//     int result = binarySearch(arr, n, key);

//     if (result != -1)
//         cout << "Element found at index " << result;
//     else
//         cout << "Element not found";

//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     int l=0;
//     int r=n-1;
//     int ans=-1;
//     while(l<=r){
//         int mid = (l+r)/2;
//         if(arr[mid]>key){
//             //go to left
//             r= mid-1
//         }
//         else{
//             //go to right
//             l=mid+1;
//         }
//     }
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == key) {
            ans = mid; // element found
            break;
        } 
        else if (arr[mid] > key) {
            r = mid - 1; // go left
        } 
        else {
            l = mid + 1; // go right
        }
    }

    if (ans != -1)
        cout << "Element found at index " << ans;
    else
        cout << "Element not found";

    return 0;
}
