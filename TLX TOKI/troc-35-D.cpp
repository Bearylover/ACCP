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

ll n, m, ans, l, r, templ, tempr, psl, psr;
ll a[200001];

int main() {
	fastio;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[0] = 1e9;
	a[n+1] = 1e9;
	l = m;
	r = m+1;
	while (r <= n || l >= 1) {
		templ = l;
		tempr = r;
		psl = 0;
		psr = 0;
		if (a[l] <= a[r]) {
			while (templ >= 1 && a[templ] <= a[l]) {
				psl += a[templ];
				templ--;
			}
		}
		if (a[r] <= a[l]) {
			while (tempr <= n && a[tempr] <= a[r]) {
				psr += a[tempr];
				tempr++;
			}
		}
		ans += max(psl, psr);
		l = templ;
		r = tempr;
	}
	cout << ans+200000 << endl;
}
