#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, m, k, ans;
ll a[11][100001], dp[100001][11], dp2[100001][11], temp[100001];

int main() {
	fastio;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> a[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			temp[j] = a[j][i];
		}
		sort(temp+1, temp+n+1, greater<int>());
		for (int j = 1; j <= n; j++) {
			dp[i][j] = dp[i][j-1] + temp[j];
		}
	}
	for (int i = 1; i <= m-k+1; i++) {
		for (int j = 0; j < k; j++) {
			ans = max(ans, dp2[i][j]);
			for (int g = j; g < k; g++) {
				for (int h = 1; h <= n; h++) {
					if (g >= h-1) {
						dp2[i+h][g-h+1]=max(dp2[i+h][g-h+1], dp2[i][j]+dp[i+g][h]);
					}
				}
			}
		}
	}
	for (int i = 0; i < k; i++) {
		ans = max(ans, dp2[m-k+2][i]);
	}
	cout << ans << endl;
}