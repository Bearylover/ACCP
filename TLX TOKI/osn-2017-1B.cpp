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

ll n, m, k, ans, l, r, cnt, temp;
ll a[201], dp[2][201][1801];
vector<ll> b;
char c;
string s;

int main() {
	fastio;
	cin >> s;
	cin >> n >> k;
	k = min(k, n*n);
	for (int i = 1; i <= n; i++) {
		cin >> c;
		a[i] = c - '0';
	}
	b.pb(-1e9);
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c == '1') {
			b.pb(i);
		}
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < b.size(); j++) {
			for (int h = 0; h <= 9*n; h++) {
				if (i == 0 && j != 0) {
					dp[i%2][j][h] = mod;
				}
				else if (j == 0 && h != 0) {
					dp[i%2][j][h] = mod;
				}
				else if (j == 0 && h == 0) {
					dp[i%2][j][h] = 0;
				}
				else {
					if (a[i] <= h) {
						dp[i%2][j][h] = min(dp[(i-1)%2][j][h], dp[(i-1)%2][j-1][h-a[i]] + abs(b[j]-i)); //value of dp = steps needed
					} else {
						dp[i%2][j][h] = dp[(i-1)%2][j][h];
					}
				}
				//for dp current:
				//if i = 0 and j not 0, inf
				//if j = 0 and h not 0, inf
				//if j = 0 and h = 0, 0 (i think, recheck)
				//just use mod as inf lol
				//for next dp:
				//if h >= a[i] ONLY.
				//dp = min(dp, dp[(i-1)%2][j-1][h-a[i]] + |b[j]-i|)
			}
		}
	}
	for (int i = 0; i <= 9*n; i++) {
		if (dp[n%2][b.size()-1][i] <= k) {
			ans = i;
		}
		//if (dp[n%2][b size-1][i] <= k) found the ans :D, get max
	}
	cout << ans << endl;
}
