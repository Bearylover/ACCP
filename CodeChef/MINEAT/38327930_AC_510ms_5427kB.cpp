#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll m, n, mid, l, r, k, ans, temp, g, t;
ll a[100001];

ll banana(ll c) {
    ll total = 0;
    for (int i = 1; i <= n; i++) {
        total += (a[i] + c - 1)/c;
    }
    return total;
}

int main() {
    cin >> t;
    for (int h = 1; h <= t; h++) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        r = 1000000001;
        l = 1;
        temp = 0;
        while (l <= r) {
            mid = (l+r)/2;
            if (banana(mid) > m) {
                l = mid + 1;
            } else {
                temp = mid;
                r = mid - 1;
            }
        }
        cout << temp << endl;
    }
}