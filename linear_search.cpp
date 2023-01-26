#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int q) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == q) {
            return i;
        }
    }
    return -1;
}
int main() {
    int t;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int q;
    cin>>q;
    int result = search(arr, n, q);
    (result == -1)? cout<<"Not found":cout<<result;
}