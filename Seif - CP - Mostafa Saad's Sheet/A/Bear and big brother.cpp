#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  int lamik,bob;
    cin>>lamik>>bob;
    int years =0;
    while (true) {
        if (lamik<=bob) {
            years ++;
            lamik*=3;
            bob*=2;
        } else {
            break;
        }
    }
    cout<<years;
     return 0;
}
