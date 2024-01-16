#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

int n, a, k, b;
int dp[5001], s[5001];
 
int main(){
	cin >> n >> a >> b >> k;
	s[a] = 1;
	while (k--) {
		for (int i = 1; i <= n; i++) {
		  dp[i] = (dp[i - 1] + s[i]) % mod;
		}
		for (int i = 1; i <= n; i++) {
      if (i < b) {
        s[i] = (dp[(i + b - 1) / 2] - s[i] + mod) % mod;
      }
      if (i > b) {
        s[i] = ((dp[n] - dp[(i + b)/2] + mod) % mod - s[i] + mod)%mod;
      }
		}
	}
	for (int i = 1; i <= n; i++) {
	  dp[i] = (dp[i - 1] + s[i]) % mod;
	}
	cout << dp[n] << endl;
}