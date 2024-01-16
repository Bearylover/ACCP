#include<bits/stdc++.h>
using namespace std;

int n, m, x;
int a[101][101], b[101], c[101];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        b[i] = 1e9;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (b[i] > a[i][j]) {
                b[i] = a[i][j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (x < b[i]) {
            x = b[i];
        }
    }
    cout << x << endl;
}