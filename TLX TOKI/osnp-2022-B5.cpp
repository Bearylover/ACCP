#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
const ll mod = 1e9+7;

ll n, m, x, ans;
ll a[2001][2001], way[2001][2001], dp[2001][2001];

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> a[i][j];
		}
	}
	for (int i = n; i >= 1; i--) {
		for (int j = m; j >= 1; j--) {
			if (i == n && j == m) {
				way[i][j] = 1;
				dp[i][j] = 1;
				continue;
			}
			x = a[i][j];
			if (i+1 <= n) {
				way[i][j] += dp[i+1][j];
			}
			if (j+1 <= m) {
				way[i][j] += dp[i][j+1];
			}
			if (i+1 <= n && j+1 <= m) {
				way[i][j] -= dp[i+1][j+1];
			}
			if (i+x+1 <= n) {
				way[i][j] -= dp[i+x+1][j];
			}
			if (j+x+1 <= m) {
				way[i][j] -= dp[i][j+x+1];
			}
			if (i+x+1 <= n && j+x+1 <= m) {
				way[i][j] += dp[i+x+1][j+x+1];
			}
			way[i][j] = way[i][j]%mod;
			dp[i][j] = way[i][j];
			if (i+1 <= n) {
				dp[i][j] += dp[i+1][j];
			}
			if (j+1 <= m) {
				dp[i][j] += dp[i][j+1];
			}
			if (i+1 <= n && j+1 <= m) {
				dp[i][j] -= dp[i+1][j+1];
			}
		}
	}
	ans = way[1][1]%mod;
	ans = (ans + mod)%mod;
	cout << ans << endl;
}
