#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

ll n, k, dp[1000001], psum[1000001];

int main() {
	cin >> n >> k;
	dp[0] = psum[0] = 1;
	for (int i = 1; i <= n; i++) {
	    if (i < k) {
	        dp[i] = (2*dp[i-1])%mod;
	    } else {
    		dp[i] = (psum[i-1] - (i-k-1 < 0 ? 0 : psum[i-k-1]))%mod;
    		if (dp[i] < 0) {
    		    dp[i] = (dp[i]+mod)%mod;
    		}
	    }
		psum[i]= (psum[i-1] + dp[i])%mod;
	}
	cout << dp[n] << endl;
}