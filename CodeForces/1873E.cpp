#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, ans, fans, n, x, l, r, mid;
ll a[200001];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		l = 1;
		r = 2e9;
		while (l <= r) {
			ans = 0;
			mid = (l+r)/2;
			for (int i = 1; i <= n; i++) {
				ans += max(0ll, mid-a[i]);
			}
			if (ans <= x) {
				l = mid+1;
				fans = max(fans, mid);
			} else {
				r = mid-1;
			}
		}
		cout << fans << endl;
		fans = 0;
	}
}