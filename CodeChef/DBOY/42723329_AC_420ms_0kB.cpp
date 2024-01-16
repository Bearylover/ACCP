#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

const int INF = 1e9;

int h[10001];
int k[10001];
int	a[10001];
int t, n, m, ans;

int main() {
	cin >> t;
	while(t--) {
		n = 0;
		m = 0;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> h[i];
		}
		for(int i = 0; i < n; i++) {
			m = max(m, h[i]);
		}
		for(int i = 0; i < n; i++) {
			cin >> k[i];
		}
		a[0] = 0;
		for(int i = 1; i < (2*m+1); i++) {
			a[i] = INF;
			for(int j = 0; j < n; j++) {
				if(i - k[j] >= 0) {
					a[i] = min(a[i-k[j]] + 1, a[i]);
				}
			}
		}
        ans = 0;
		for(int i = 0; i < n; i++) {
			ans += a[h[i]*2];
		}
		cout << ans << endl;
	}
}