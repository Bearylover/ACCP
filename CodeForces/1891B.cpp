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

ll n, m, k, ans, l, r, cnt, temp, q, t;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		vector<ll> a(n, 0);
		vector<ll> x;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < q; i++) {
			cin >> temp;
			if (x.empty() || x.back() > temp) { //what kind of optimization is this
				x.push_back(temp);
			}
		}
		for (int i = 0; i < a.size(); i++) {
			for (auto &v : x){
				if (a[i] % (1 << v) == 0) {
					a[i] |= (1 << v-1);
				}
			}
		}
		for (int i = 0; i < a.size(); i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}