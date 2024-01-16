#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
const ll mod = 1e9+7;

ll n, m, k, a[2000002], b[2000002];

ll mul(ll x, ll y, ll ans = 1) {
	for (; y; y >>= 1, x = x*x%mod) {
	  if (y & 1) ans = ans*x%mod;
	}
	return ans%mod;
}

ll f(ll x, ll y) {
	return (((a[x] * b[y])%mod)*b[x-y])%mod;
}

int main() {
	cin >> n >> m >> k;
	if (n > m+k) {
		cout << 0 << endl;
		return 0;
	}
	a[0] = 1;
	for (int i = 1; i <= n+m; i++) {
		a[i] = a[i-1]*i%mod;
	}
	b[n+m] = mul(a[n+m], mod-2);
	for (int i = n+m-1; i >= 0; i--) {
		b[i] = b[i+1] * (i+1)%mod;
	}
	cout << (f(n+m, n) - f(n+m, n-k-1)+mod)%mod << endl;
}