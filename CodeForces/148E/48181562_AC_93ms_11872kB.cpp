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

int n, m, x, t;
int a[101][10001], memo[101][10001], dp[101][10001];

int main() {
	fastio;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		for (int j = 1; j <= t; j++) {
			cin >> x;
			a[i][j] = a[i][j-1] + x;
		}
		for (int j = 1; j <= t; j++) {
			for (int k = 0; k <= j; k++) {
				memo[i][j] = max(memo[i][j], a[i][t] + a[i][k] - a[i][k+t-j]);
			}
		}
		for (int j = 1; j <= m; j++) {
			for (int k = 0; k <= min(j,t); k++) {
				dp[i][j] = max(dp[i][j], dp[i-1][j-k] + memo[i][k]);
			}
		}
	} 
	cout << dp[n][m] << endl;
}