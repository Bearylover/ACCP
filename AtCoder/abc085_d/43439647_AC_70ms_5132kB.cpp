#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll n, h, ans;
ll a[100001], b[100001];

int main() {
	cin >> n >> h;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	sort (a+1, a+n+1);
	sort (b+1, b+n+1);
	for (int i = n; i >= 1; i--) {
		if (h > 0 && b[i] > a[n]) {
			h -= b[i];
			ans++;
		}
	}
	if (h > 0) {
		ans += (h/a[n] + (h%a[n] != 0));
	}
	cout << ans << endl;
}
