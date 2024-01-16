#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t;
string s;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> s;
		if (s == "bca" || s == "cab") {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}