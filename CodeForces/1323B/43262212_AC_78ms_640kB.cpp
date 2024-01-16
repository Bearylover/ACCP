#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll a[40001], b[40001];
ll n, m, i, j, k, ans, u, v, x, y;

int main() {
	fastio;
	ans = 0;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] != 0) {
			a[i] += a[i-1];
		}
	}
	for (i = 0; i < m; i++) {
		cin >> b[i];
		if (b[i] != 0) {
			b[i] += b[i-1];
		}
	}
	for (i = 1; i <= n; i++) {
		if (k%i == 0) {
			u = i, v = k/i, x = 0, y = 0l;
			for (j = 0; j < n; j++) {
				if (a[j] >= u) {
					x++;
				}
			}
			for (j = 0; j < m; j++) {
				if(b[j] >= v) {
					y++;
				}
			}
			ans += x*y;
		}
	}
	cout << ans << endl;
}