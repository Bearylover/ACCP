#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll t, n, val;
char a[1001][1001], com[1001][1001];

int main() {
	fastio;
	cin >> t;
	while (t--) {
		val = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= n/2; i++) {
			for (int j = 1; j <= n/2; j++) {
				com[i][j] = max(max(a[i][j], a[j][n-i+1]), max(a[n-j+1][i], a[n-i+1][n-j+1]));
			}
		}
		for (int i = 1; i <= n/2; i++) {
			for (int j = 1; j <= n/2; j++) {
				val += com[i][j] - a[i][j];
			}
		}
		for (int i = (n/2)+1; i <= n; i++) {
			for (int j = 1; j <= n/2; j++) {
				val += com[j][n-i+1] - a[i][j];
			}
		}
		//3, 1 to 1, 2
		for (int i = 1; i <= n/2; i++) {
			for (int j = (n/2)+1; j <= n; j++) {
				val += com[n-j+1][i] - a[i][j];
			}
		}
		for (int i = (n/2)+1; i <= n; i++) {
			for (int j = (n/2)+1; j <= n; j++) {
				val += com[n-i+1][n-j+1] - a[i][j];
			}
		}
		cout << val << endl;
	}
}