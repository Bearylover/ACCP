#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll x, y, z, ans1, ans2, temp;
ll a[1001], b[1001];
string s;
bool dp[1001][10001];

int main() {
	fastio;
	cin >> x >> y >> z;
	cin >> s;
	ans2 = z;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') {
			ans1 += y;
			ans2 += x;
		} else {
			ans1 += x;
			ans2 += y;
		}
		temp = ans1;
		ans1 = min(ans1, ans2 + z);
		ans2 = min(ans2, temp + z);
	}
	cout << min(ans2, ans1) << endl;
}