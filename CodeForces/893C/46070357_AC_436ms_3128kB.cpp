#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

ll n, q, x, y, ans;
ll a[100001], par[100001];

int f(int x) {
	if (par[x] == 0) {
		return x;
	} else {
		return par[x] = f(par[x]);
	}
}
int main() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= q; i++){
		cin >> x >> y;
		x = f(x); y = f(y);
		if (x != y) {
			if (a[x] > a[y]) {
				par[x] = y;
			} else {
				par[y] = x;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (par[i] == 0) {
			ans += a[i];
		}
	}
	cout << ans << endl;
}