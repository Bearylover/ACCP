#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll n, temp, x, y;
vector<ll> a[200001];
ll ans[200001], b[200001];

void dfs(ll x, ll y) {
	for(auto i : a[x]){
		if(i != y){
			ll r = ans[x];
			ans[i] = r+n-(2*b[i]);
			dfs(i, x);
		}
	}
}

void f(ll x, ll y, ll z) {
	temp += z;
	b[x] = 1;
	for(auto i : a[x]){
		if(i != y){
			f(i, x, z+1);
			b[x] += b[i];
		}
	}
}

int main() {
	cin >> n;
	for(int i = 1; i < n; i++) {
		cin >> x >> y;
		a[x].pb(y);
		a[y].pb(x);
	}
	f(1, -1, 0);
	ans[1] = temp;
	dfs(1, -1);
	for(int i = 1; i <= n; i++) {
	    cout << ans[i] << endl;
	}
}