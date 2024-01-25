#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll t, n, x, y, sum, cnt, ans, m;
ll a[100001], psum[100001], ssum[100001];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		memset(psum, 0, sizeof(psum));
		memset(ssum, 0, sizeof(ssum));
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		psum[2] = 1;
		ssum[n-1] = 1;
		for (int i = 3; i <= n; i++) {
			if ((a[i]-a[i-1]) < (a[i-1]-a[i-2])) {
				psum[i] = psum[i-1]+1;
			} else {
				psum[i] = psum[i-1]+(a[i]-a[i-1]);
			}
		}
		for (int i = n-2; i >= 1; i--) {
			if ((a[i+2]-a[i+1]) > (a[i+1]-a[i])) {
				ssum[i] = ssum[i+1]+1;
			} else {
				ssum[i] = ssum[i+1]+(a[i+1]-a[i]);
			}
		}
		cin >> m;
		while (m--) {
			cin >> x >> y;
			if (x < y) {
				cout << psum[y]-psum[x] << endl;
			} else if (x > y) {
				cout << ssum[y]-ssum[x] << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}
}