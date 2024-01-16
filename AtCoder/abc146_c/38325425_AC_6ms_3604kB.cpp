#include <bits/stdc++.h>
using namespace std;
#define ll long long

int digit(ll c) {
    ll count = 1;
    while (c >= 10) {
        count++;
        c = c/10;
    }
    return count;
}

ll m, n, mid, l, r, k, ans, temp, g, b, c;
ll a[200001];

int main() {
    cin >> b >> c >> m;
    r = 1000000000;
    l = 1;
    temp = 0;
    while (l <= r) {
        mid = (l+r)/2;
        if (b*mid + c*digit(mid) <= m) {
            temp = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << temp << endl;
}