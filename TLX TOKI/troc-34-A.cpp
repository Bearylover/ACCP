#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, k, x, ans, temp;

 
int main() {
	fastio;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		ans = max(ans, x);
	}
	cout << ans << endl;
}
