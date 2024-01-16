#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll n, t;
ll a[5001], dp[5001][5001];
ll temp, ans;

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				dp[i][j] = 0;
			}
		}
		ans = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				dp[i][j] = dp[i][j-1];
				if (a[j] < a[i]) {
					dp[i][j]++;
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			temp = 0;
			for (int j = i - 1; j > 1; j--) {
				temp += dp[j][n] - dp[j][i];
				if (a[j-1] < a[i]) {
					ans+=temp;
				}
			}
		}
		cout << ans << endl;
	}
}