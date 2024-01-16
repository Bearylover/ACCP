#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
ll n, m, ans, a, b;
bool vis[100001], cat[100001];
vector<ll> v[100001];
 
ll dfs(ll x, ll y) {
	vis[x] = true;
	ll res = 0;
	if (cat[x]) {
		y--;
	} else {
		y = m;
	}
	if (y < 0) {
		return 0;
	}
	if (x > 1 && v[x].size() == 1) {
		return 1;
	}
	for (int i : v[x]) {
		if (vis[i] == false) {
			res += dfs(i, y);
		}
	}
	return res;
}
 
int main() {
	fastio;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> cat[i];
	}
	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		v[a].pb(b);
		v[b].pb(a);
	}
	cout << dfs(1, m) << endl;
}
 
/*
 __         __
/  \.-"""-./  \
\    -   -    /
 |   o   o   |
 \  .-'''-.  /
  '-\__Y__/-'
     `---`
     Beary
*/