#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n;
 
int main() {
	fastio;
    cin >> n;
    if (n%2) {
    	cout << 2*((n/2)+1)*((n/2)+2) << endl;
	} else {
		cout << ((n/2)+1)*((n/2)+1) << endl;
	}
}