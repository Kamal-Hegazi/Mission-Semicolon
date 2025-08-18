#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    int d=0;
    for (int i=0;i<n;i++) {
        if (s[i]=='A') {
            a++;
        } else if (s[i]=='D') {
            d++;
        }
    }
    if (a==d) {
        cout<<"Friendship";
    } else if (a>d) {
        cout<<"Anton";
    } else {
        cout<<"Danik";
    }

     return 0;
}
