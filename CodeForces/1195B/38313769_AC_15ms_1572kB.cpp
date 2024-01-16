#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumup(ll c) {
    c = (c*(c + 1))/2;
    return c;
}

ll m, n, mid, l, r, k, ans, temp, g, b, c;
ll a[200001];

int main() {
    cin >> n >> m;
    r = n;
    l = 1;
    temp = 0;
    while (l <= r) {
        mid = (l+r)/2;
        if (sumup(mid) - (n - mid) < m) {
            l = mid + 1;
        } else if (sumup(mid) - (n - mid) > m) {
            r = mid - 1;
        } else {
            temp = mid;
            break;
        }
    }
    cout << (n - temp) << endl;
}