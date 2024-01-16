#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int n, t, ans, x;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		map<int, int> m, c;
		ans = n;
		for(int i = 0; i < n; i++) {
			cin >> x;
			c[x]++;
			m[c[x]]++;
			ans = min(ans, n - m[c[x]] * c[x]);
		}
		cout << ans << endl;
	}
}