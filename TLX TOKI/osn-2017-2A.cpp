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
bool b;
pll a[200001];
ll idx[200001];
vector<ll> sc;
string s;

int main() {
	fastio;
	cin >> s;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i].fi;
		a[i].se = i;
	}
	sort(a, a+n);
	for (int i = 0; i < n; i++) {
		idx[a[i].se] = i;
	}
	for (int i = 0; i < n; i++) {
		if (idx[i] == i) {
			cnt++;
			continue;
		}
		if (b) {
			sc.pb(cnt);	
		}
		b = true;
		cnt = 0;
		m = i;
		for (int j = i; j <= m; j++) {
			m = max(m, idx[j]);
		}
		ans += m+1-i;
		i = m;
		k--;
	}
	sort (sc.begin(), sc.end());
	cerr << "debug " << ans << " " << k << endl;
	if (k > 0) {
		ans += k; //wasted
	} else {
		temp = 0;
		while (k < 0) {
			ans += sc[temp];
			k++;
			temp++;
		}
	}
	cout << ans << endl;
}
