#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
const ll mod = 998244353;
 
ll n, ans;
ll a[5001], b[5001], sum[5001];
ll dp[5001][5001];
vector<pll> v;
 
int main() {
	fastio;	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		v.pb({a[i], b[i]});
	}
	sort(v.begin(), v.end());
	sum[0] = 1;
	for(int i = 0; i < n; i++) {
	    for(int j = 5000; j >= 0; j--) {
            if(j - v[i].se >= 0) {
		    	dp[i][j] = sum[j - v[i].se];
		    }
            sum[j] += dp[i][j];
            sum[j] %= mod;
            if(v[i].fi >= j) {
                ans += dp[i][j];
            	ans %= mod;
            }
	    }
	}
	cout << ans << endl;
}   