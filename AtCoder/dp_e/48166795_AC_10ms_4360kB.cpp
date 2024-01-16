#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

int n, w;
ll ans;
ll a[101], b[101];
ll dp[100001];

int main() {
	fastio;
	ans = 1e18;
    cin >> n >> w;
    for (int i = 1; i <= 100000; ++ i) {
        dp[i] = 1e18;
    }
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 100000; j >= b[i]; j--) {
            if (dp[j-b[i]] + a[i] <= w) {
                dp[j] = min(dp[j], dp[j-b[i]] + a[i]);
            }
        }
    }
    for (int i = 1; i <= 100000; ++ i) {
        if (dp[i] != 1e18) {
            ans = i;
        }
    }
    cout << ans << endl;
}