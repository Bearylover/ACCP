#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct number {
    int x;
    int y;
};

bool compare(number p, number q) {
    if (p.x == q.x) return p.y < q.y;
    return p.x < q.x;
}

ll m, n, mid, l, r, k, ans, temp, g;
ll a[200001];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> g;
        a[i] = g + a[i-1];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= k; i++) {
        cin >> m;
        r = n;
        l = 1;
        temp = 0;
        while (l <= r) {
            mid = (l+r)/2;
            if (m <= a[mid]) {
                temp = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << temp << " " << m - a[temp - 1] << endl;
    }
}