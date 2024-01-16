#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, ans;
char c[11][11];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		ans = 0;
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				cin >> c[i][j];
				if (c[i][j] == 'X') {
					if (i == 1 || i == 10 || j == 1 || j == 10) {
						ans += 1;
					} else if (i == 2 || i == 9 || j == 2 || j == 9) {
						ans += 2;
					} else if (i == 3 || i == 8 || j == 3 || j == 8) {
						ans += 3;
					} else if (i == 4 || i == 7 || j == 4 || j == 7) {
						ans += 4;
					} else if (i == 5 || i == 6 || j == 5 || j == 6) {
						ans += 5;
					}
				}
			}
		}
		cout << ans << endl;
	}
}