#include <bits/stdc++.h>
using namespace std;

struct number {
    int x;
    int y;
};
number str[1001];
int s, n;

bool compare(number p, number q) {
    if (p.x == q.x) return p.y < q.y;
    return p.x < q.x;
}

int main() {
    cin >> s >> n;
    for (int i = 1; i <= n; i++) {
        cin >> str[i].x >> str[i].y;
    }
    sort(str+1, str+n+1, compare);
    for (int i = 1; i <= n; i++) {
        if (s > str[i].x) {
            s = s + str[i].y;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}