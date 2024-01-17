#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll n, f, a, b, t, arr, pre, tot;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> f >> a >> b;
		arr = 0;
		pre = 0;
		tot = 0;
		for (int i = 1; i <= n; i++) {
			pre = arr;
			cin >> arr;
			tot += min(a*(arr-pre), b);
		}
		if (tot < f) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}