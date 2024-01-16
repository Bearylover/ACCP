#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, k, ans, j, o, i, cntj, cnto, cnti;
ll a[101];
string joi; //ironically, I'm not joiful.

int main() {
	fastio;
	cin >> n >> k >> joi;
	ans = 1e18;
	for (int t = 0; t < n; t++) {
		while (j < n && cntj < k) {
			if (joi[j] == 'J') {
				cntj++;
			}
			if (joi[j] == 'O') {
				cnto--;
			}
			j++;
		}
		while (o < n && cnto < k) {
			if (joi[o] == 'O') {
				cnto++;
			}
			if (joi[o] == 'I') {
				cnti--;
			}
			o++;
		}
		while (i < n && cnti < k) {
			if (joi[i] == 'I') {
				cnti++;
			}
			i++;
		}
		if (cnti != k) {
			break;
		}
		ans = min(ans, i - t - 3*k);
		if (joi[t] == 'J') {
			cntj--;
		}
	}
	if (ans < n) {
		cout << ans << endl;
	} else {
		cout << -1 << endl;
	}
}