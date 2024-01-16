#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, m, ans = 1e9;

int main() {
	fastio;
    cin >> n;
    while (n--) {
    	cin >> m;
    	ans = min(ans, abs(m));
	}
	cout << ans << endl;
}