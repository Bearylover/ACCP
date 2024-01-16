#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 3359232;

ll t, n, ans;
ll a[1001], m[1001][1001];
bool cek;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cek = true;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			a[i] = 1073741823; //this is just 2^30 - 1 but faster
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> m[i][j];
				if (i != j) {
					a[i] &= m[i][j];
					a[j] &= m[i][j];
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (((a[i] | a[j]) != m[i][j]) && i != j) {
					cek = false;
				}
			}
		}
		if (cek) {
			cout << "YES" << endl;
			for (int i = 1; i <= n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}