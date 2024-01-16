#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, k, x, ans, temp;
ll yay[21], c[100001], f[100001];
ll a[501][10001];
 
int main() {
	fastio;
    cin >> n >> k;
    for (int i = 1; i <= n*k; i++) {
    	cin >> x;
    	f[x]++;
	}
    for (int i = 1; i <= n; i++) {
    	cin >> x;
    	c[x]++;
	}
	for (int i = 1; i <= k; i++) {
		cin >> yay[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n*k; j++) {
			for (int h = 0; h <= k; h++) {
				a[i][j+h] = max(a[i][j+h], a[i-1][j]+yay[h]);
			}
		}
	}
    for (int i = 1; i <= 100001; i++) {
    	ans += a[c[i]][f[i]];
	}
    cout << ans << endl;
}