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

int n, s, l, temp;
int a[100001], dp[100001], precnt[100001];
int memo[2][100001][21];
//log2(1e5) = ~20

int query(int l, int r) {
  int k = precnt[r - l + 1];
  return max(memo[0][l][k], memo[0][r - (1 << k) + 1][k]) - min(memo[1][l][k], memo[1][r - (1 << k) + 1][k]);
}

int main() {
	fastio;
	cin >> n >> s >> l;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memo[0][i][0] = memo[1][i][0] = a[i];
	}
	for (int i = 1; i < 20; ++i) {
		for (int j = 1; (j-1+(1<<i)) <= n; j++) {
			memo[0][j][i] = max(memo[0][j][i - 1], memo[0][j + (1<<(i-1))][i - 1]);
			memo[1][j][i] = min(memo[1][j][i - 1], memo[1][j + (1<<(i-1))][i - 1]);
		}
	}
	precnt[1] = 0;
	for (int i = 2; i <= n; i++) {
		precnt[i] = precnt[i/2] + 1;
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = 1e9;
	}
	for (int i = l; i <= n; i++) {
		while ((temp <= i - l) && (query(temp+1, i) > s || dp[temp] == 1e9)) {
			temp++;
		}
		if (temp <= i - l) {
			dp[i] = dp[temp] + 1;
		}
	}
	if (dp[n] == 1e9) {
		cout << -1 << endl;
	} else {
		cout << dp[n] << endl;
	}
}