#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll n, k, x, ans, temp;
ll a[100001], pc[100001];

ll inv(ll x) {
	return (x <= 1ll) ? x : mod-(mod/x)*inv(mod%x)%mod;
}

ll c(ll n, ll r) {
	return (pc[n]*inv(pc[r])%mod)*inv(pc[n-r])%mod;
}
 
int main() {
	fastio;
	cin >> n >> x;
	while (x%2 == 0) {
		x /= 2;
		k++;
	}
	pc[0] = 1;
	for (int i = 1; i <= n; i++) {
		pc[i] = pc[i-1]*i%mod;
	}
	if (k >= n || x != 1) {
		cout << -1 << endl;
	} else {
		cout << c(n-1, k)%mod << endl;
	}
}
