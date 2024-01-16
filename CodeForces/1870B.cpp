#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, n, m, x, ans1, ans2, temp;
ll a[200001];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= m; i++) {
			cin >> temp;
			if (i == 1) {
				x = temp;
			} else {
				x = x|temp;
			}
		}
		if (n%2) {
			ans1 = a[1];
			for (int i = 2; i <= n; i++) {
				ans1 = ans1^a[i];
			}
			for (int i = 1; i <= n; i++) {
				a[i] = a[i]|x;
			}
			ans2 = a[1];
			for (int i = 2; i <= n; i++) {
				ans2 = ans2^a[i];
			}
			cout << ans1 << " " << ans2 << endl;
		} else {
			ans1 = a[1];
			for (int i = 2; i <= n; i++) {
				ans1 = ans1^a[i];
			}
			for (int i = 1; i <= n; i++) {
				a[i] = a[i]|x;
			}
			ans2 = a[1];
			for (int i = 2; i <= n; i++) {
				ans2 = ans2^a[i];
			}
			cout << ans2 << " " << ans1 << endl;
		}
	}
}