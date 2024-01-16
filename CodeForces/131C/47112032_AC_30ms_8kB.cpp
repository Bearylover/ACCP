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

ll n, m, t, ans;

ll c(ll n, ll r) {
	ll res = 1;
	for (int i = n, j = 1; i > n-r; i--, j++) {
		res *= i;
		res /= j;
	}
	return res;
}

int main() {
	fastio;
	cin >> n >> m >> t;
	for (int i = 4; i <= min(t-1, n); i++) {
		ans += c(n, i)*c(m, t-i);
	}
	cout << ans << endl;
} 