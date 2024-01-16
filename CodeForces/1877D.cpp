#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 998244353;

ll n, ans, x, t, need, tot;
ll a[100001], p[100001];

int main() {
	fastio;
	cin >> n;
	p[1] = 1;
	for (int i = 2; i <= n; i++) {
		p[i] = (p[i-1]*2)%mod;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			a[i] = max(a[i], a[j]);
		}
	}
	sort(a+1, a+n+1);
	for (int i = 1; i <= n; i++) {
		ans += a[i]*p[i];
		ans = ans%mod;
	}
	cout << ans%mod << endl;
}