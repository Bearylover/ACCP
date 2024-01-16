#include <bits/stdc++.h>
using namespace std;

struct number {
    int x;
    int y;
};
number str[1001];
int m, n, ans, t;
number cord;
bool con;
bool pos;

bool compare(number p, number q) {
    if (p.x == q.x) return p.y < q.y;
    return p.x < q.x;
}

int main() {
    cin >> t;
    for (int p = 1; p <= t; p++) {
        pos = true;
        con = false;
        cord.x = 0;
        cord.y = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> str[i].x >> str[i].y;
        }
        sort(str+1, str+n+1, compare);
        for (int i = 1; i < n; i++) {
            if (str[i].x < str[i+1].x && str[i].y > str[i+1].y) {
                pos = false;
            }
        }
        if (pos == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        if (pos == true) {
            for (int i = 1; i <= n; i++) {
                for (int j = cord.x; j < str[i].x; j++) {
                    cout << "R";
                    cord.x++;
                }
                for (int j = cord.y; j < str[i].y; j++) {
                    cout << "U";
                    cord.y++;
                }
            }
            cout << endl;
        }
    }
}