#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
 
int n, t;
pii a[200005];
map<int,int> mp;
bool done;

int f (int x) {
	if (mp.count(x) == 0 || mp[x] == x) {
		return x;
	} else {
		return mp[x] = f(mp[x]);
	}
}

int main() {
	fastio;
	cin >> t;
	while (t--) {
		done = false;
		cin >> n;
		mp.clear();
		for(int i = 1; i <= n; i++) {
			cin >> a[i].fi >> a[i].se;
		}
		sort (a+1, a+n+1, [](pii x,pii y){return x.se != y.se?x.se < y.se : x.fi > y.fi;});
		for(int i = 1; i <= n; i++) {
			int u = f(a[i].fi);
			if (u > a[i].se) {
				cout << "No" << endl;
				done = true;
				break;
			}
			mp[u] = u + 1;
		}
		if (done == false) {
			cout << "Yes" << endl;
		}
	}
}