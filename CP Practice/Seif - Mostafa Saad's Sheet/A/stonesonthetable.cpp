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
    string stones;
    cin>>stones;

    int count = 0;
    for (int i=0;i<n-1;i++) {
        if (stones[i+1]==stones[i]) {
            count++;
        }
    }
    cout<<count;

    return 0;
}
