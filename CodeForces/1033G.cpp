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

ll a[200001], amod[200001];
ll n, m, k, ans, l, r, temp, q, t, x, y, ans1, ans2, ans3, ans4;

int main() {
	fastio;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int h = 2; h <= m*2; h++) {
		for (int i = 1; i <= n; i++) {
			amod[i] = a[i] % h;
		}
		amod[n+1] = 0;
		amod[n+2] = h - 1;
		sort (amod+1, amod+n+3);
		for (int i = n + 2, j = 0; i >= 2; i--, j ^= 1) {
			temp = amod[i-1] + 1;
			r = min(amod[i], m);
			if (!j) {
				temp = max(temp, amod[n+1]/2 + 1);
			} else {
				temp = max(temp, amod[n]/2 + 1);
			}
			ll resl = max(temp, h - r);
			ll resr = min(r, h - temp);
			if (resl <= resr) {
				if(!j) ans4 += resr - resl + 1;
				else ans3 += resr - resl + 1;
			}
		}
	}
	ans1 = ans2 = (m*m - ans3 - ans4)/2;
	cout << ans1 << " " << ans2 << " " << ans3 << " " << ans4 << endl;
}