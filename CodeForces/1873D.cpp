#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, n, k, ans;
string s;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cin >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'B') {
				i += (k-1);
				ans++;
			}
		}
		cout << ans << endl;
		ans = 0;
	}
}