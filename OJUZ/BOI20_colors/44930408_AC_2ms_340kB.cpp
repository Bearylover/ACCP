#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, l, r, mid, temp, x, c;
bool whySoUseless, ans;
 
int main() {
	fastio;
	cin >> n;
	l = 1;
	r = n;
	temp = 1;
	while (l < r) {
		temp = -temp;
		l = (l+r-1)/2;
		c += temp*l;
		x = max(x, 1 - c);
		l++;
	}
	cout << "? " << x << endl;
	cin >> whySoUseless;
	l = 1;
	r = n;
	temp = 1;
	while (l < r) {
		temp = -temp;
		mid = (l+r-1)/2;
		x += temp*mid;
		cout << "? " << x << endl;
		cin >> ans;
		if (ans) {
			r = mid;
		} else {
			l = mid + 1;
		}
	}
	cout << "= " << l << endl;
}