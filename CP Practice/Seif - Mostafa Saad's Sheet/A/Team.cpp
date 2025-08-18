#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n][3];
    int problems = 0;
    for (int i=0;i<n;i++) {
        for(int j=0;j<3;j++) {
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        int sure=0;
        for(int j=0;j<3;j++) {
            if(arr[i][j]==1) {
                sure++;
            }
        }
        if (sure>=2) {
            problems++;
        }
    }
    cout<<problems;
     return 0;
}
