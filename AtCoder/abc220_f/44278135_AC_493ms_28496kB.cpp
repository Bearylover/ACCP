#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, a, b, ans, st[200001], dist[200001], arr[200001];
vector<ll> adj[200001];

void dfs(ll u, ll v){
	st[u] = 1;
	for (ll i : adj[u]){
		if (i == v) continue;
		dist[i] = dist[u] + 1;
		dfs(i,u);
		st[u] += st[i];
	}
	ans += dist[u];
}
 
void dfs2(ll u, ll v){
	for (ll i : adj[u]){
		if (i == v) continue;
		arr[i] = arr[u] + n - 2*st[i];
		dfs2(i, u);
	}
}
 
int main() {
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dfs(1,0);
	arr[1] = ans;
	dfs2(1,0);
	for (int i = 1; i <= n; i++){
		cout << arr[i] << endl;
	}
} 