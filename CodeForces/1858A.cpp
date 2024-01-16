#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll t, a, b, c, anna, katie;

int main() {
	fastio;
    cin >> t;
    while (t--) {
    	cin >> a >> b >> c;
    	anna = a + (c-(c/2));
    	katie = b + (c/2);
    	if (anna > katie) {
    		cout << "First" << endl;
		} else {
			cout << "Second" << endl;
		}
	}
}