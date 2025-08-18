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


    int S = 0;
    int D = 0;
    bool first_S = true;
    int l=0;
    int r=n-1;
    while (l<=r) {
        int max;
        if (arr[l]>=arr[r]) {
            max=arr[l];
            l++;
        } else {
            max=arr[r];
            r--;
        }
        if (first_S) {
            S+= max;
        } else{
            D+=max;
        }
        first_S = !first_S;


    }
        cout<<S<<" "<<D;
    return 0;
}
