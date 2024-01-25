#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define fi first
#define se second

int n, ans, t, pv, nt;
int att[300005], def[300005];
set<int> l, del, cur, ncur;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		att[0] = 0;
		def[0] = 2e9;
		att[n+1] = 0;
		def[n+1] = 2e9;
		for (int i = 1; i <= n; i++) {
			cin >> att[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> def[i];
		}
		l.clear();
		cur.clear();
		for (int i = 0; i <= n+1; i++) {
			l.insert(i);
			cur.insert(i);
		}
		for (int k = 1; k <= n; k++) {
			del.clear();
			ncur.clear();
			for (int i : cur) {
				auto temp = l.find(i);
				if (temp == l.end()) {
					continue;
				}
				pv = *prev(temp);
				nt = *next(temp);
				if (att[pv] + att[nt] > def[i]) {
					del.insert(i);
					ncur.insert(pv);
					ncur.insert(nt);
		        }
			}
			cout << del.size() << ' ';
			for (auto i : del) {
				l.erase(i);
			}
			cur = ncur;
		}
		cout << endl;
	}
}