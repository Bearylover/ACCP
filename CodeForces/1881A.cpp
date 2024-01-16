#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll t, n, m, len, len2, tot;
string s, s2;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		bool cek = true;
		cin >> n >> m;
		cin >> s;
		cin >> s2;
		len = s.length();
		len2 = s2.length();
		if (s.find(s2) != string::npos) {
			cout << 0 << endl;
			cek = false;
		} else {
			for (int i = 1; i <= 6; i++) {
				s = s+s;
				if (s.find(s2) != string::npos) {
					cout << i << endl;
					cek = false;
					break;
				}
			}
			if (cek) {
				cout << -1 << endl;
			}
		}
	}
}