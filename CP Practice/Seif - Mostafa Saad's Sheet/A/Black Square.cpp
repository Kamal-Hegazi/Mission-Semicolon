#include <cmath>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for (int i=0;i<4;i++) {
        cin>>arr[i];
    }
    int calories = 0;
    string cals;
    cin>>cals;
    int x = cals.length();
    for (int i=0;i<x;i++) {
        if(cals[i]=='1') {
            calories+=arr[0];
        }
        else if (cals[i]=='2') {
            calories +=arr[1];
        } else if (cals[i]=='3') {
            calories += arr[2];
        } else {
            calories += arr[3];
        }
    }
    cout<<calories;
    return 0;
}
