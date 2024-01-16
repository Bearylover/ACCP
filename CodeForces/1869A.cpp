#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, t, ans, temp, x, y, z;

int main() {
	fastio;
    cin >> t;
    while (t--) {
    	cin >> n;
    	for (int i = 1; i <= n; i++) {
    		cin >> temp;
		}
    	if (n%2 == 0) {
    		cout << 2 << endl;
    		for (int i = 1; i <= 2; i++) {
    			cout << "1 " << n << endl;
			}
		} else {
			cout << 4 << endl;
			cout << "1 " << n << endl;
			cout << "1 " << n-1 << endl;
			cout << n-1 << " " << n << endl;
			cout << n-1 << " " << n << endl;
		}
	}
}