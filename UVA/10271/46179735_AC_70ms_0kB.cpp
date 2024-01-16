#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll t, n, k;
ll dp[5001][5001], a[5001], brandon[5001];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> k >> n;
		k += 8;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		reverse(a+1, a+n+1);
		for (int i = 2; i <= n; i++) {
			brandon[i] = (a[i]-a[i-1])*(a[i]-a[i-1]); //calc baldness
		}
		for (int i = 0; i <= n; i++) {
			dp[0][i] = 0;
		}
		for (int i = 1; i <= k; i++) {
	        dp[i][3*i-1] = 1e18;
		    for (int j = 3*i; j <= n - (abs(i-k)*2) + 1; j++) {
				dp[i][j] = min(dp[i][j-1], dp[i-1][j-2] + brandon[j]);
			}
		}
		cout << dp[k][n] << endl;
	}
}