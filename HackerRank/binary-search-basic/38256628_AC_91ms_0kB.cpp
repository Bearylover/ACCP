#include <bits/stdc++.h>
using namespace std;

struct number {
    int x;
    int y;
};

bool compare(number p, number q) {
    if (p.x == q.x) return p.y < q.y;
    return p.x < q.x;
}

int m, n, mid, l, r;
number a[1000001];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].x;
        a[i].y = i;
    }
    cin >> m;
    sort(a, a + n, compare);
    r = n - 1;
    while (l <= r) {
        mid = (l+r)/2;
        if (m < a[mid].x) {
            r = mid - 1;
        } else if (m > a[mid].x) {
            l = mid + 1;
        } else {
            cout << a[mid].y << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}