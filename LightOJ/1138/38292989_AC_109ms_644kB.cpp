#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll m, n, mid, l, h, r, k, ans, temp, t;

ll f(ll num) {
    temp = 0;
    for (ll i = 5; i <= num; i = i*5) {
        temp = temp + (num/i);
    }
    return temp;
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        l = 1;
        h = 1e18;
        ans = -1;
        while (l <= h) {
            mid = (l + h)/2;
            k = f(mid);
            if (k > n) {
                h = mid - 1;
            } else if (k < n) {
                l = mid + 1;
            } else {
                ans = mid;
                h = mid - 1;
            }
        }
        if (ans == -1) {
            cout << "Case " << i << ": impossible" << endl;
        } else {
            cout << "Case " << i << ": " << ans << endl;
        }
    }
}