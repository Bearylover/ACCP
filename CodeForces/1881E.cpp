#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, t, x, temp;
ll a[200001], dp[200001];
 
int main(){
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			dp[i] = 1e18;
		}
		dp[0] = 0;
		for (int i = 1; i <= n; i++) {
			dp[i] = min(dp[i], dp[i-1]+1);
			if (a[i]+i <= n) {
				dp[a[i]+i] = min(dp[a[i]+i], dp[i-1]);
			}
		}
		cout << dp[n] << endl;
	}
}