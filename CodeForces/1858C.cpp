#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, n, m, x, ans1, ans2, temp;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (i%2) {
				temp = i;
				while (temp <= n) {
					cout << temp << " ";
					temp *= 2;
				}
			}
		}
		cout << endl;
	}
}