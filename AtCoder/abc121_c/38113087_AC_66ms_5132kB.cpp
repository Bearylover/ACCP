#include <bits/stdc++.h>
using namespace std;

struct number {
    long long x;
    long long y;
};
number str[100001];
long long m, n, ans;

bool compare(number p, number q) {
    if (p.x == q.x) return p.y < q.y;
    return p.x < q.x;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> str[i].x >> str[i].y;
    }
    sort(str+1, str+n+1, compare);
    for (int i = 1; i <= n; i++) {
        if (m - str[i].y >= 0) {
            m = m - str[i].y;
            ans = ans + str[i].x*str[i].y;
        } else {
            while (m > 0) {
                m--;
                ans = ans + str[i].x;
            }
            break;
        }
    }
    cout << ans << endl;
}