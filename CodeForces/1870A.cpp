#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, x, y, z;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> x >> y >> z;
		if (y > (z+1) || y > x) {
			cout << -1 << endl;
		} else {
			if (y == z) {
				cout << ((y*(y-1))/2) + ((x-y)*(z-1)) << endl;
			} else {
				cout << ((y*(y-1))/2) + ((x-y)*z) << endl;
			}
		}
	}
}