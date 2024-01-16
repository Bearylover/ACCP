#include<bits/stdc++.h>
using namespace std;

int n, m, x;
int a[501][501], b[501][501];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j]; 
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> b[i][j]; 
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (b[i][j] == 1) {
                x = x + a[i][j];
            }
        }
    }
    cout << x << endl;
}