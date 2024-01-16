#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, m, k, x, y, temp, ans;
ll a[200001], b[200001], freq[200001];

int main() {
	fastio;
	x = 1;
	ans = LLONG_MAX;
	cin >> n >> k >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> temp;
		cin >> freq[temp];
	}
	while (y <= n) {
		if (m != 0) {
			y++;
			b[a[y]]++;
			if (freq[a[y]] == b[a[y]]) {
				m--;
			}
		} else {
			ans = min(ans, y-x+1);
			if (freq[a[x]] == b[a[x]]) {
				m++;
			}
			b[a[x]]--;
			x++;
		}
	}
	if (ans == LLONG_MAX) {
		cout << "impossible" << endl;
	} else {
		cout << ans << endl;
	}
}