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

ll n, l, r, mid, temp, eaten, ans, nom;

int main() {
    fastio;
    cin >> n;
    l = 1;
    r = n;
    while (l <= r-1) {
    	mid = (l+r)/2;
    	temp = n;
    	eaten = 0;
    	while (temp > 0) {
    		ll nom = min(temp, mid);
    		temp -= nom;
    		eaten += nom;
    		temp -= temp/10;
		}
		if (eaten*2 >= n) {
			r = mid;
			ans = mid;
		} else {
			l = mid+1;
		}
	}
	if (ans == 0) {
		cout << 1 << endl;
	} else {
		cout << ans << endl;
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