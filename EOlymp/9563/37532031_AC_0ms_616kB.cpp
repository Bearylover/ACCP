#include<bits/stdc++.h>
using namespace std;

int n, m, x;
int a[101][101];

int main() {
    cin >> n >> m;
    x = 101;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j]; 
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (x > a[i][j]) {
                x = a[i][j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == x) {
                cout << i << " ";
                break;
            }
        }
    }
}