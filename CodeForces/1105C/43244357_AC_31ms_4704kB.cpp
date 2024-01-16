#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll a[3];
ll dp[200001][3];
ll n, l, r;

int main() {
	cin >> n >> l >> r;
	dp[1][0] = a[0] = ((r+3)/3) - ((l+2)/3);
	dp[1][1] = a[1] = ((r+2)/3)-((l+1)/3);
	dp[1][2] = a[2] = ((r+1)/3)-((l+0)/3);
	for(int i = 2; i <= n; i++) {
		dp[i][0] = ((dp[i-1][0]*a[0]%mod)+(dp[i-1][1]*a[2]%mod)+(dp[i-1][2]*a[1]%mod))%mod;
		dp[i][1] = ((dp[i-1][0]*a[1]%mod)+(dp[i-1][1]*a[0]%mod)+(dp[i-1][2]*a[2]%mod))%mod;
		dp[i][2] = ((dp[i-1][0]*a[2]%mod)+(dp[i-1][1]*a[1]%mod)+(dp[i-1][2]*a[0]%mod))%mod;
	}
	cout << dp[n][0] << endl;
}