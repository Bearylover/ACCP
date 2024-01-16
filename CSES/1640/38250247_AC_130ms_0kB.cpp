#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct number {
    ll x;
    ll y;
};

bool compare(number p, number q) {
    if (p.x == q.x) return p.y < q.y;
    return p.x < q.x;
}

ll m, n, mid, l, r, k;
number a[200001];

int main() {
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i].x;
        a[i].y = i;
    }
    sort(a + 1, a + n + 1, compare);
    for (ll i = 1; i <= n; i++) {
        r = n;
        l = 1;
        m = k - a[i].x;
        while (l <= r) {
            mid = (l+r)/2;
            if (mid == i) {
                break;
            }
            if (m < a[mid].x) {
                r = mid - 1;
            } else if (m > a[mid].x) {
                l = mid + 1;
            } else {
                cout << a[i].y << " " << a[mid].y << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}