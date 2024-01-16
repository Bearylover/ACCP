#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int n, x, y, a, b;
int dp[301][301];

int main() {
	fastio;
	cin >> n >> x >> y;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j <= y; j++){
			dp[i][j] = 1e9;
		}
	}
	dp[0][0] = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		for (int j = x; j >= 0; j--) {
			for (int k = y; k >= 0; k--) {
				dp[j][k] = min(dp[j][k], dp[max(j-a, 0)][max(k-b, 0)]+1);
			}
		}
	}
	if(dp[x][y] == 1e9){
	  	cout << "-1" << endl;
	  	return 0;
	}
	cout << dp[x][y] << endl;
}