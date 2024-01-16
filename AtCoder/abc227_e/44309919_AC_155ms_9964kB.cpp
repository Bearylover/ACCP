#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll k;
string s;
string str = "KEY";
map<string, map<ll, ll> > dp;

ll dfs(string s, ll k) {
	ll n = s.size();
	if (k < 0) {
		return 0;
	}
	if (k == 0 || n == 1) {
		return 1;
	}
	if (dp[s][k] != 0) {
		return dp[s][k];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			if (str[i] == s[j]) {
				dp[s][k] += dfs(s.substr(0, j) + s.substr(j + 1), k - j);
				break;
			}
		}
	}
	return dp[s][k];
}
 
int main() {
	cin >> s >> k;
	cout << dfs(s, k) << endl;
}