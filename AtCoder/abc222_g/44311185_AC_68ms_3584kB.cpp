#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, t, l, p, ans;

ll f (ll a, ll b, ll mod){ 
	ll res = 1;
	a %= mod;
	while (b > 0) {
		if (b%2 != 0) {
			res = res*a%mod;
		}
		a = a*a%mod;
		b = b/2;
	}
	return res;
}

int main(){
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		n *= 9;
		if (n%2 == 0) {
			n = n/2;
		}
		l = n;
		p = n;
		for (ll i = 2; i*i <= l; i++) {
			if (l%i == 0) {
				p = p/i*(i-1);
				while (l%i == 0) {
					l /= i;
				}
			}
		}
		if (l > 1) {
			p = p/l*(l-1);
		}
		ans = p + 1;
		for (ll i = 1; i*i <= p; i++) {
			if (p%i == 0){
				if (f(10, i, n) == 1) {
					ans = min(ans, i);
				}
				if (f(10, p/i, n) == 1) {
					ans = min(ans, p/i);
				}
			}
		}
		if (ans == p+1) {
			ans = -1;
		}
		cout << ans << endl;
	}
}