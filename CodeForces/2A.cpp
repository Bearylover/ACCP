#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second

ll n, win;
ll x[1001];
string s[1001];
map<string, ll> m, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> s[i] >> x[i];
    	m[s[i]] += x[i];
	}
	for (auto i : m) {
		win = max(i.se, win);
	}
	for (int i = 1; i <= n; i++) {
		ans[s[i]] += x[i];
		if (ans[s[i]] >= win && m[s[i]] == win) {
			cout << s[i] << endl;
			return 0;
		}
	}
}