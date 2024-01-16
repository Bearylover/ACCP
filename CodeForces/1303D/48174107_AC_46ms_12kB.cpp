#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll n, m, x, ans, l, r, temp, t;
ll a[61];
//log2(1e18) = ~60
int main() {
	fastio;
	cin >> t;
	while (t--) {
		memset(a, 0, sizeof(a));
		cin >> n >> m;
		temp = 0;
		for (ll i = 1; i <= m; i++) {
			cin >> x;
			for (ll j = 60; j >= 0; j--) {
				if ((1ll << j) == x) {
					a[j]++;
					break;
				}
			}
			temp += x;
		}
		if (temp < n) {
			cout << -1 << endl;
			continue;
		}
		ans = 0;
		for (ll i = 0; i <= 60; i++) {
			if ((n>>i)%2 == 1) {
				if (a[i] != 0) {
					a[i]--;
				} else {
					for (ll j = i+1; j <= 60; j++) {
						if (a[j] != 0) {
							a[j]--;
							ans += j-i;
							for (ll k = j-1; k >= i; k--) {
								a[k]++;
							}
							break;
						}
					}
				}
			}
			a[i+1] += a[i]/2;
		}
		cout << ans << endl;
	}
}