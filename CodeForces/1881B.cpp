#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll t;
ll a[5];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> a[1] >> a[2] >> a[3];
		sort(a+1, a+4);
		if (a[2]+a[3]-(2*a[1]) > 3*a[1] || a[2]%a[1] != 0 || a[3]%a[1] != 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}