#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
const ll mod = 1e9+7;

int finallyUseful, n, q, l, r, mid;

int ask(int x, int y) {
	int res;
	cout << "? " << x << " " << y << endl;
	cin >> res;
	return res;
}

int main() {
    fastio;
    cin >> finallyUseful >> n >> q;
    if (finallyUseful == 2) {
    	int a[n+1];
    	a[1] = 1;
    	for (int i = 2; i <= n; i++) {
    		if (ask(i-1, i) == 1) {
    			a[i] = a[i-1];
			} else {
				a[i] = a[i-1] + 1;
			}
		}
		cout << "!";
		for (int i = 1; i <= n; i++) {
			cout << " " << a[i];
		}
		cout << endl;
		return 0;
	} else if (finallyUseful == 3 || finallyUseful == 4) {
		vector<int> a(n+1);
		a[1] = 1;
		vector<pii> memo;
		memo.pb({1, 1});
		int temp = 1;
		for (int i = 2; i <= n; i++) {
			l = 0;
			r = memo.size()-1;
			while (l < r) {
				mid = (l+r+1)/2;
				if (ask(memo[mid].fi, i) > memo.size() - mid) {
					r = mid - 1;
				} else {
					l = mid;
				}
			}
			if (l == 0 && temp < 4) {
				if (ask(1, i) == temp+1) {
					temp++;
					a[i] = temp;
					memo.pb({i, temp});
					continue;
				}
			}
			a[i] = memo[l].se;
			memo[l].fi = i;
			sort(memo.begin(), memo.end());
		}
		cout << "!";
		for (int i = 1; i <= n; i++) {
			cout << " " << a[i];
		}
		cout << endl;
		return 0;
	} else {
		vector<int> a(n+1);
		a[1] = 1;
		vector<pii> memo;
		memo.pb({1, 1});
		int temp = 1;
		for (int i = 2; i <= n; i++) {
			if (ask(1, i) == temp+1) {
				temp++;
				a[i] = temp;
				memo.pb({i, temp});
				continue;
			}
			l = 0;
			r = memo.size()-1;
			while (l < r) {
				mid = (l+r+1)/2;
				if (ask(memo[mid].fi, i) > memo.size() - mid) {
					r = mid - 1;
				} else {
					l = mid;
				}
			}	
			a[i] = memo[l].se;
			memo[l].fi = i;
			sort(memo.begin(), memo.end());
		}
		cout << "!";
		for (int i = 1; i <= n; i++) {
			cout << " " << a[i];
		}
		cout << endl;
		return 0;
	}
}
	
/*
 __         __
/  \.-"""-./  \
\    -   -    /
 |   o   o   |
 \  .-'''-.  /
  '-\__Y__/-'
     `---`
     Beary
*/
