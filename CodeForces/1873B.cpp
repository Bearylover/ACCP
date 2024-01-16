#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, n, temp, ans;
ll a[100001];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= 9; i++) {
			temp = 1;
			a[i]++;
			for (int j = 1; j <= n; j++) {
				temp *= a[j];
			}
			ans = max(ans, temp);
			a[i]--;
		}
		cout << ans << endl;
		ans = 0;
	}
}