// 4. General Case (for any number of divisors)

// Loop over all subsets of divisors:
// If subset size is odd → add
// If subset size is even → subtract
// Each term is n/lcm(subset)


#include <bits/stdc++.h>
using namespace std;

// gcd
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

// lcm
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long n;
    int k;
    cin >> n >> k; // range 1..n, and number of divisors
    
    vector<long long> d(k);
    for (int i = 0; i < k; i++) cin >> d[i];

    long long count = 0;

    // iterate over all non-empty subsets
    for (int mask = 1; mask < (1 << k); mask++) {
        long long l = 1;
        bool ok = true;
        for (int i = 0; i < k; i++) {
            if (mask & (1 << i)) {
                l = lcm(l, d[i]);
                if (l > n) { ok = false; break; } // avoid overflow
            }
        }
        if (!ok) continue;

        int bits = __builtin_popcount(mask); // how many numbers in subset
        if (bits % 2 == 1) count += n / l;  // odd → add
        else count -= n / l;                // even → subtract
    }

    cout << count << endl;
}












// 3 divisors


#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long n;
    int k;
    cin >> n >> k; // range 1..n and number of divisors

    vector<long long> d(k);
    for (int i = 0; i < k; i++) cin >> d[i];

    long long count = 0;

    // subsets of size 1
    for (int i = 0; i < k; i++) {
        long long l = d[i];
        if (l <= n) count += n / l; // add because odd size
    }

    // subsets of size 2
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            long long l = lcm(d[i], d[j]);
            if (l <= n) count -= n / l; // subtract because even size
        }
    }

    // subsets of size 3
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            for (int m = j + 1; m < k; m++) {
                long long l = lcm(lcm(d[i], d[j]), d[m]);
                if (l <= n) count += n / l; // add because odd size
            }
        }
    }

    cout << count << endl;
}
