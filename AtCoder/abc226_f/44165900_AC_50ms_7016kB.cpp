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
const ll mod = 998244353;
 
int n, k;
ll ans;
ll p[51][200001], arr[51][51], brr[51];
 
ll gcd (int a, int b) {
	if (a%b == 0) {
		return b;
	} else {
		return gcd(b, a%b);
	}
}

ll lcm (int a,int b) {
	return (ll)a*b/gcd(a,b);
}
 
ll f (ll x,int y) {
	ll res = 1;
	while (y != 0) {
		if (y%2 == 1) {
			res = res*x%mod;
		}
		x = x*x%mod;
		y = y/2;
	}
	return res;
}
 
int main() {
	cin >> n >> k;
	for (int i = 0; i <= 50; i++) {
		arr[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			arr[i][j] = (arr[i-1][j-1]+arr[i-1][j])%mod;
		}
	}
	brr[0] = 1;
	for (int i = 1; i <= 50; i++) {
		brr[i] = brr[i-1]*i%mod;
	}
	p[0][1] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 200000; j++)
		if (p[i][j]) {
			for (int k = 1; k+i <= n; k++) {
				p[i+k][lcm(j,k)] = (p[i+k][lcm(j,k)] + p[i][j]*arr[i+k-1][i]%mod*brr[k-1])%mod;
				//yes, this gave me as much of a headache as it did you.
			}
		}
	}
	for (int i = 1; i <= 200000; i++) {
		if (p[n][i] != 0) {
			ans = (ans+p[n][i]*f(i,k))%mod;
		}
	}
	cout << ans << endl;
}