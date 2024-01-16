#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, m, k, t;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		if (k > 3) {
			cout << 0 << endl;
		} else if (k == 1) {
			cout << 1 << endl;
		} else if (k == 2) {
			if (m > n) {
				cout << n + ((m-n)/n) << endl;
			} else {
				cout << m << endl;
			}
		} else if (k == 3) {
			if (m > n) {
				cout << m - (n + ((m-n)/n)) << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}
}