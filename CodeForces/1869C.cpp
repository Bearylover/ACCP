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
		if (m == 1) {
			cout << 0 << endl;
			for (int i = 1; i <= n; i++) {
				cout << 0 << endl;
			}
		} else {
			if (n > m-1) {
				cout << m << endl;
			} else {
				cout << n+1 << endl;
			}
			for (int i = 1; i <= min(m-1, n); i++) {
				for (int j = 1; j <= m; j++) {
					cout << (i+j-2)%m << " ";
				}
				cout << endl;
			}
			if (n > m-1) {
				for (int i = m-1; i < n; i++) {
					for (int j = 1; j <= m; j++) {
						cout << j-1 << " ";
					}
					cout << endl;
				}
			}
		}
	}
}