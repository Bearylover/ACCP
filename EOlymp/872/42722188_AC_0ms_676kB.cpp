#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

ll n, k, l, r, mid, ttemp, ans, conf;
ll a[10001];

ll cek(ll u) {
    ll temp = 0;
    for (int i = 1; i <= n; i++) {
        temp += a[i]/u;
    }
    if (temp < k) {
        return 1;
    }
    if (temp >= k) {
        return -1;
    }
}

int main() {
    fastio;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        conf += a[i];
    }
    if (conf < k) {
        cout << "0" << endl;
        return 0;
    }
    l = 1;
    r = 1e12;
    while (l <= r) {
        mid = (l+r)/2;
        ttemp = cek(mid);
        if (ttemp == 1) {
            r = mid-1;
        } else if (ttemp == -1) {
            l = mid+1;
            ans = mid;
        }
    }
    cout << ans << endl;
}