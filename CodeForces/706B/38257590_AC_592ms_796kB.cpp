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

ll m, n, mid, l, r, k, ans, temp;
int a[200001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> m;
        r = n;
        l = 1;
        temp = 0;
        while (l <= r) {
            mid = (l+r)/2;
            if (m < a[mid]) {
                r = mid - 1;
            } else {
                temp = mid;
                l = mid + 1;
            }
        }
        cout << temp << endl;
    }
}