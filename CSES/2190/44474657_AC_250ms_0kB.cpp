#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

bool onSegment(pll p, pll q, pll r) {
    if (q.fi <= max(p.fi, r.fi) && q.fi >= min(p.fi, r.fi) && q.se <= max(p.se, r.se) && q.se >= min(p.se, r.se)) {
        return true;
    }
    return false;
}

ll orientation(pll p, pll q, pll r) {
    ll val = (q.se - p.se) * (r.fi - q.fi) - (q.fi - p.fi) * (r.se - q.se);
    if (val == 0) return 0; 
    return (val > 0)? 1: 2;
}

bool doIntersect(pll p1, pll q1, pll p2, pll q2) {
    ll o1 = orientation(p1, q1, p2);
    ll o2 = orientation(p1, q1, q2);
    ll o3 = orientation(p2, q2, p1);
    ll o4 = orientation(p2, q2, q1);
    if (o1 != o2 && o3 != o4) {
        return true;
    }
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    return false;
}

int main() {
	fastio;
	int n;
	cin >> n;
	while (n--) {
		pll p1, q1, p2, q2;
		cin >> p1.fi >> p1.se >> q1.fi >> q1.se >> p2.fi >> p2.se >> q2.fi >> q2.se;
	    doIntersect(p1, q1, p2, q2)? cout << "YES" << endl : cout << "NO" << endl;
	}
}