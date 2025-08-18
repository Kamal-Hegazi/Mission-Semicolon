#include <cmath>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int officers =0;
    int untreated_crimes=0;
    for (int i=0;i<n;i++) {
        if (arr[i]==-1) {
            if(officers==0) {
                untreated_crimes++;
            } else {
                officers--;
            }
        }
        if (arr[i]>0) {
            officers+=arr[i];
        }
    }
    cout<<untreated_crimes;
    return 0;
}
