//TLE 80
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

ll x, y, n, tot, k, ans, m, sz, tz;
char a[205][205];
ll dps[205][205][205], dpt[205][205][205];
string s, t, temps, tempt, whySoUseless;
vector<pii> v;

int main() {
	fastio;
	ans = 1e18;
	cin >> whySoUseless;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> s >> t;
	sz = s.size();
	tz = t.size();
	for (int i = 0; i < tz/2; i++) {
		swap(t[i], t[tz-i-1]);
	}
	for (int h = 0; h < sz; h++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i][j] == s[h] && (dps[i+1][j][h] != 0 || dps[i-1][j][h] != 0 || dps[i][j+1][h] != 0 || dps[i][j-1][h] != 0 || h == 0)) {
					dps[i][j][h+1] = 1;
				}
			}
		}
	}
	for (int h = 0; h < tz; h++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i][j] == t[h] && (dpt[i+1][j][h] != 0 || dpt[i-1][j][h] != 0 || dpt[i][j+1][h] != 0 || dpt[i][j-1][h] != 0 || h == 0)) {
					dpt[i][j][h+1] = 1;
				}
			}
		}
	}
	if (sz > 1 || tz > 1) {
		for (int h = 1; h <= min(sz, tz); h++) {
			temps = s[sz-h] + temps;
			tempt = tempt + t[tz-h];
			if (temps == tempt) {
				for (int i = 1; i <= n; i++) {
					for (int j = 1; j <= m; j++) {
						if (dps[i][j][sz-h+1] && dpt[i][j][tz]) {
							ans = min(ans, sz+tz-h);
						}
					}
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (dpt[i][j][tz]) {
				v.pb({i, j});
				//cout << "got at " << i << " " << j << endl;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (dps[i][j][sz]) {
				for (int h = 0; h < v.size(); h++) {
					ans = min(ans, sz+tz+abs(v[h].fi - i) + abs(v[h].se - j) - 1);
				}
			}
		}
	}
	if (ans == 1e18) {
		cout << -1 << endl;
	} else {
		cout << ans << endl;
	}
}
