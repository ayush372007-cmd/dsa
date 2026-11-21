#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long x; cin >> x;
        long long best = x;                 
        for (long long k = 1; k + 1 < best; k++) {
            long long dmg = 0, p = k + 1, moves = k;
            while (dmg < x && moves < best) {
                dmg += p; moves++;
                if (p > 1) p--;             
            }
            if (dmg >= x) best = min(best, moves);
        }
        cout << best << "\n";
    }
}