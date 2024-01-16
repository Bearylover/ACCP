#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, ans, x, t, need, tot, temp;
pll a[100001];

bool srt (pll a, pll b) {
	if (a.fi != b.fi) {
		return (a.fi < b.fi);
	} else {
		return (a.se > b.se);
	}
}

int main() {
	fastio;
	cin >> t;
	while (t--) {
		tot = 0;
	    cin >> n >> x;
	    for (int i = 1; i <= n; i++) {
	    	cin >> a[i].se;
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i].fi;
		}
		sort(a+1, a+n+1, srt);
		need = n-1;
		tot += x;
		for (int i = 1; i <= n; i++) {
			if (a[i].fi > x) {
				tot += need*x;
				break;
			}
			if (need >= a[i].se) {
				need -= a[i].se;
				tot += a[i].fi*a[i].se;
			} else {
				tot += a[i].fi*need;
				need = 0;
			}
			if (need == 0) {
				break;
			}
		}
		cout << tot << endl;
	}
}