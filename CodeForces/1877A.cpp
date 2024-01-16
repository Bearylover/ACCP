#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second

ll n, ans, x, t;

int main() {
	cin >> t;
	while (t--) {
	    cin >> n;
	    for (int i = 1; i < n; i++) {
	    	cin >> x;
	    	ans = ans + x;
		}
		cout << ans*(-1) << endl;
		ans = 0;
	}
}