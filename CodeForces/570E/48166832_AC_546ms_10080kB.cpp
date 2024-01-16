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

ll n, m, ans, a[5][501][501];
char c[501][501];
 
int main() {
	fastio;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> c[i][j];
		}
	}
	if (c[1][1] != c[n][m]){
		cout << 0 << endl;
	} else {
		a[1][1][n] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; (i+j-2) <= (n+m-i-j); j++) {
				for (int k = n; k >= n-(i+j-2); k--) {
					if (c[i][j] == c[k][n+m-i-j-k+2]) {
						a[i%2][j][k] = a[i%2][j][k] + a[(i-1)%2][j][k];
						a[i%2][j][k] = a[i%2][j][k] + a[(i-1)%2][j][k+1];
						a[i%2][j][k] = a[i%2][j][k] + a[i%2][j-1][k];
						a[i%2][j][k] = a[i%2][j][k] + a[i%2][j-1][k+1];
						a[i%2][j][k] = a[i%2][j][k]%mod;
						if (abs(i-k) + abs(j-(n+m-i-j-k+2)) <= 1) {
							ans = (ans + a[i%2][j][k])%mod;
						}
					}
				}
			}
			memset(a[(i-1)%2], 0, sizeof(a[(i-1)%2]));
		}
		cout << ans << endl;
	}
}