#include<bits/stdc++.h>
using namespace std;

int n, x, y, z;
int a[2001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= 2000; i++) {
        if (i - 1 != x) {
                break;
            }
        for (int j = 1; j <= 2000; j++) {
            if (a[j] == i) {
                x++;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0 && x != 0) {
            y++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            z++;
        }
        if (a[i] == 1) {
            z = 3000;
            break;
        }
    }
    if (z <= n && z != 0) {
        cout << "1" << endl;
    } else if (x == 0 || y == 0) {
        cout << "0" << endl;
    } else {
        cout << x+1 << endl;
    }
}