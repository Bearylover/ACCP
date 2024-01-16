#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

int n, t, i, j, ans;
int dp[100001][2], temp[100001][2];
int m[100001], a[100001];
 
int main() {
	cin >> n;
    cin >> t;
	for (i = 0; i < n; i++) {
		cin >> m[i];
	}
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i <= t; i++) {
		dp[i][0] = 0;
		dp[i][1] = 0;
	}
	for (j = 0; j < n; j++) {
		for (i = 0; i <= t; i++) {
			temp[i][0] = dp[i][0];
			temp[i][1] = dp[i][1];
		}
		for (i = 0; i <= t; i++) {
			dp[i][0] = 0;
			dp[i][1] = 0;
			if (i >= a[j]) {
				dp[i][0] = max(temp[i][0], temp[i - a[j]][0] + m[j]);
				dp[i][1] = max(temp[i][1], temp[i - a[j]][0] + m[j] + m[j]);
				dp[i][1] = max(temp[i - a[j]][1] + m[j], dp[i][1]);
				dp[i][1] = max(dp[i][1], dp[i][0]);
			} else {
				dp[i][0] = temp[i][0];
				dp[i][1] = temp[i][1];
			}
		}
	}
	for(i = 0; i <= t; i++){
		ans = max(ans, dp[i][0]);
		ans = max(ans, dp[i][1]);
	}
	cout << ans << endl;
}