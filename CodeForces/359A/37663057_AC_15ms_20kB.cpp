#include<bits/stdc++.h>
using namespace std;

int n, m, x, y, total;
int a[51][51];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                if (i == n || i == 1) {
                    x++;
                }
                if (j == m || j == 1) {
                    y++;
                }
            }
        }
    }
    total = x + y;
    if (total >= 1) {
        cout << "2" << endl;
    } else {
        cout << "4" << endl;
    }
}