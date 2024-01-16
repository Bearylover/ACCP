#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll a[101];
ll n, m, k, ans, l, r, cnt, temp, q, t;
bool b;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		b = true;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				if (__gcd(a[i], a[j]) <= 2) {
					cout << "Yes" << endl;
					b = false;
					break;
				}
			}
			if (!b) {
				break;
			}
		}
		if (b) {
			cout << "No" << endl;
		}
	}
}