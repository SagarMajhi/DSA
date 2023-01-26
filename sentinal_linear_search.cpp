#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int q) {
    int last = arr[n - 1];
    arr[n - 1] = q;
    int i = 0;
    while(arr[i] != q) {
        i++;
    }
    arr[n - 1] = last;
    if((i < n - 1) || (arr[n - 1] == q)) {
        cout<<i;
    } else {
        cout<<"Not found";
    }
}
int main() {
    int t;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int n = sizeof(arr) / sizeof(arr[0]);
    search(arr, n, q);
}