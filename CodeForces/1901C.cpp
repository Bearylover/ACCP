#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 3359232;

ll t, n, ans, temp, mn, mx;
vector<ll> v;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		v.clear();
		ans = 0;
		mn = 1e18;
		mx = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> temp;
			mn = min(mn, temp);
			mx = max(mx, temp);
		}
		while (mn != mx) {
			if (mn%2 == 0) {
				mn /= 2;
				mx /= 2;
				ans++;
				v.pb(0);
			} else {
				mn++;
				mn /= 2;
				mx++;
				mx /= 2;
				ans++;
				v.pb(1);
			}
		}
		cout << ans << endl;
		if (ans > 0 && ans <= n) {
			for (int i = 0; i < ans; i++) {
				cout << v[i] << " ";
			}
		}
	}
}