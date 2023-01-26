// Hashing:-
// Given array a of N integers.
// Given Q queries and in each query given a number X,
// print count of that number in array.

// Constraints
// 1 <= N <= 10^5
// 1 <= a[i] <= 10^7
// 1 <= Q <= 10^5

// Input:-
// 6
// 3 5 5 7 7 8
// 5
// 3
// 7
// 5
// 8
// 9 
 
// Output:-
// 1
// 2
// 2
// 1
// 0

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--) {
        int x;
        cin>>x;
        int ct = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i] == x) {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    //  O(N) + O(Q*N) = O(N^2)
}