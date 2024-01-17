#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, temp, m, x, y, q, l, r, mid, ans, ans2, cnt1, cnt2;
ll a[3][200001];

int main() {
	fastio;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
    	cin >> x;
    	if (x == 1) {
    		cin >> a[1][i];
    		cnt1++;
		} else {
			cin >> a[2][i];
			cnt2++;
		}
	}
    sort(a[1]+1, a[1]+m+1);
    sort(a[2]+1, a[2]+m+1);
    reverse(a[1]+1, a[1]+m+1);
    reverse(a[2]+1, a[2]+m+1);
    cin >> q;
    while (q--) {
    	cin >> x >> y;
    	l = 1;
    	r = cnt1;
    	ans = 0;
    	while (l <= r) {
    		mid = (l+r)/2;
    		if (x <= a[1][mid] && y <= a[1][mid]) {
    			ans = mid;
    			l = mid+1;
			} else {
				r = mid-1;
			}
		}
		l = 1;
		r = cnt2;
		ans2 = 0;
		while (l <= r) {
			mid = (l+r)/2;
			if (x >= a[2][mid] && y >= a[2][mid]) {
				ans2 = cnt2-mid+1;
				r = mid-1;
			} else {
				l = mid+1;
			}
		}
		cout << (ans+ans2)%2 << endl;
	}
}
