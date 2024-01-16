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

ll n, m, x, ans, l, r, temp, temp2;
ll a[2001], b[2001];
 
int main() {
	fastio;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] += a[i-1];
	}
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	cin >> x;
	for (int i = 1; i <= n; i++) {
		temp = 1e9;
		for (int j = 1; j <= n-i+1; j++) {
			temp = min(temp, a[i+j-1]-a[j-1]);
		}
		l = r = 1;
		temp2 = b[1];
		while (r <= m) {
			if (temp*temp2 <= x) {
				ans = max(ans, i*(r-l+1));
				r++;
				temp2 += b[r];
			} else {
				temp2 -= b[l];
				l++;
			}
		}
	}
	cout << ans << endl;
}