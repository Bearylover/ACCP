#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, h, st, ans;
ll a[200001], b[200001];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    ans = m + b[0] - a[0];
    for (int i = 1; i < n; i++) {
        h += a[i] - b[i-1];
        while (h >= m) {
            st++;
            h -= a[st]-b[st-1];
        }
        ans = max(ans, m - h + b[i] - a[st]);
    }
    cout << ans << endl;
}