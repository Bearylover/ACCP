#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[21], b[201];
bool valid = false;

void f(int x, int y) {
    if (x > n) {
        if (y == 0) {
            valid = true;
        } 
    } else {
        f(x+1, y-a[x]);
        f(x+1, y);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= q; i++) {
        valid = false;
        f(1, b[i]);
        if (valid == true) {
        cout << "yes" << endl;
        } else {
        cout << "no" << endl;
        }
    }
}