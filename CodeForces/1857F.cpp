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

ll a[200001];
ll n, m, k, ans, l, r, temp, q, t, x, y;
map<ll, ll> cnt;

ll det(ll a, ll b, ll c) {
	return (b*b)-(4*a*c);
}

ll eq (ll a, ll b, ll c) {
	if (det(a, b, c) < 0) {
		return 0;
	}
	ll res1 = (b+floor(sqrt(det(a, b, c))))/(2*a);
	ll res2 = (b-floor(sqrt(det(a, b, c))))/(2*a);
	if (res1*res2 != c || res1+res2 != b) {
		return 0;
	}
	if (det(a, b, c) == 0) {
		return cnt[res1]*(cnt[res1]-1)/2;
	}
	return cnt[res1]*cnt[res2];
}

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		cnt.clear();
		for (int i = 1; i <= n; i++) {
			cin >> temp;
			cnt[temp]++;
		}
		cin >> q;
		for (int i = 1; i <= q; i++) {
			cin >> x >> y;
			cout << eq(1, x, y) << " ";
		}
		cout << endl;
	}
}