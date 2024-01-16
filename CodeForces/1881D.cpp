#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, t, x, temp;
map<ll, ll> m;
bool cek;
 
int main(){
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		m.clear();
		cek = false;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			temp = x;
			for (int j = 2; j*j <= temp; j++) {
				while (temp%j == 0) {
					temp /= j;
					m[j]++;
				}
			}
			if (temp != 1) {
				m[temp]++;
			}
		}
		for (auto i : m) {
			if (i.second%n != 0) {
				cout << "NO" << endl;
				cek = true;
				break;
			}
		}
		if (!cek) {
			cout << "YES" << endl;
		}
	}
}