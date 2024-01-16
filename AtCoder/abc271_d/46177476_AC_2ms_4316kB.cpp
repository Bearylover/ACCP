#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, m, k, t, ans;
ll a[1001], b[1001];
bool dp[1001][10001];

void f(ll n, ll m) {
	if (n == 0) {
		return;
	}
	if (m >= a[n] && dp[n-1][m-a[n]] == true) {
		f(n-1, m-a[n]);
		cout << "H";
	} else {
		f(n-1, m-b[n]);
		cout << "T";
	}
}

int main() {
	fastio;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	dp[0][0] = true;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i-1][j] == true) {
				dp[i][j+a[i]] = dp[i-1][j];
				dp[i][j+b[i]] = dp[i-1][j];
			}
		}
	}
	if (dp[n][m] == true) {
		cout << "Yes" << endl;
		f(n, m);
		cout << endl;
	} else {
		cout << "No" << endl;
	}
}