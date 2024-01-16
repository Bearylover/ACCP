#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll t, x, n;
 
int main() {
	fastio;
    cin >> t;
    while (t--) {
        cin >> x;
        if (x <= 6) {
        	cout << "NO" << endl;
		} else if (x%3 == 0) {
			if (x < 12) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
				cout << "1 4 " << x-5 << endl;
			}
		} else {
			cout << "YES" << endl;
			cout << "1 2 " << x-3 << endl;
		}
    }
}