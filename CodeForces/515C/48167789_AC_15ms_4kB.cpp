#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

int n;
string s;
vector<int> v;

int main() {
	fastio;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
    	if (s[i] == '2') {
    		v.pb(2);
		}
		if (s[i] == '3') {
    		v.pb(3);
		}
		if (s[i] == '4') {
			v.pb(3);
    		v.pb(2);
    		v.pb(2);
		}
		if (s[i] == '5') {
    		v.pb(5);
		}
		if (s[i] == '6') {
    		v.pb(5);
    		v.pb(3);
		}
		if (s[i] == '7') {
    		v.pb(7);
		}
		if (s[i] == '8') {
			v.pb(2);
			v.pb(2);
			v.pb(2);
			v.pb(7);
		}
		if (s[i] == '9') {
    		v.pb(3);
			v.pb(3);
			v.pb(2);
			v.pb(7);
		}
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	cout << endl;
}