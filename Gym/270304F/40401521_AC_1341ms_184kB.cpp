#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

ll a[10001], n;

ll cut(ll price[], ll n) {
    ll val[n+1];
    val[0] = 0;
    for (int i = 1; i <= n; i++) {
        ll highest = -9e18;
        for (int j = 1; j <= i; j++) {
            highest = max(highest, price[j]+val[i-j]);
            val[i] = highest;
        }
    }
    return val[n];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cout << cut(a, n) << endl;
}
