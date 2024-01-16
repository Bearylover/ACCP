#include<bits/stdc++.h>
using namespace std;

int t, n, x, lim, y;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        x = 9;
        y = 0;
        cin >> n;
        lim = n;
        while (n > x) {
            n = n-x;
            x--;
            y++;
        }
        cout << n;
            while (y >= 1) {
                cout << 10-y;
                y--;
            }
        cout << endl;
    }
}