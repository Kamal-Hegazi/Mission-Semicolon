#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5][5];
    int x;
    int y;
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin>>arr[i][j];
            if (arr[i][j]==1) {
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(2-x)+abs(2-y);
     return 0;
}
