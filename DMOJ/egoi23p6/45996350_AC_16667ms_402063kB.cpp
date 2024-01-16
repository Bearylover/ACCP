#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

ll n, f, t, ans, pos, x;
ll a[101], memo[101][101][5001];

ll solve(ll i, ll j, ll ans) {
	if (ans < 0) {
		return -1e18;
	}
	if (i > f) {
		return 0;
	}
	if (j > n) {
		return -1e18;
	}
	if (memo[i][j][ans] != -1) {
		return memo[i][j][ans];
	} else {
		return memo[i][j][ans] = max(solve(i+1, j+1, ans-abs(i-j))+a[j], solve(i, j+1, ans));
	}
}

int main() {
	fastio;
	memset(memo, -1, sizeof(memo));
	cin >> n >> f >> t;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n*(n-1)/2; i++) {
		if (solve(1, 1, i) >= t) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}