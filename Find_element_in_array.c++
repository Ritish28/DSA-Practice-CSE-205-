#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int first = -1, last = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            if(first == -1) first = i; // store first occurrence
            last = i; // keep updating last occurrence
        }
    }
    cout << "First occurrence index: " << first << endl;
    cout << "Last occurrence index: " << last << endl;
    return 0;
}