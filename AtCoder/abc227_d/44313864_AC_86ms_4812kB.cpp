#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, k, l, r, mid, temp;

int main(){
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i : v) {
    	cin >> i;
	  }
    l = 0;
    r = 1e18/k;
    while (r - l > 1) {
        mid = (l + r) / 2;
		temp = 0;
        for (ll i : v) {
        	temp += min(i, mid);
		}
        if (temp >= k * mid) {
        	l = mid;
		} else {
			r = mid;
		}
    }
    cout << l << endl;
}