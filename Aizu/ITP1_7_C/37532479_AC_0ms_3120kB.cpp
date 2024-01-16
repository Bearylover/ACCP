#include<bits/stdc++.h>
using namespace std;

int n, m, x;
int a[102][102], b[102], c[102];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            x = x + a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            b[i] = b[i] + a[i][j];
        }
    }
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            c[j] = c[j] + a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << a[i][j] << " ";
        }
        cout << b[i] << endl;
    }
    for (int i = 1; i <= m; i++) {
        cout << c[i] << " ";
    }
    cout << x << endl;
}