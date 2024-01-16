#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

ll n, k, x, t;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		cin >> n >> k >> x;
		if ((n*(n+1)/2)-((n-k)*(n-k+1)/2) < x || (k*(k+1)/2) > x) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}