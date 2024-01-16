#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

int n;
double x, y, gx, gy, ans;
map <double, int> mp;

int main() {
	fastio;
	cin >> n >> gx >> gy;
	while (n--) {
		cin >> x >> y;
		if (x == gx) {
			ans = 1;
		} else {
			mp[(y-gy)/(x-gx)] = 1;
		}
	}
	cout << mp.size() + ans << endl;
}