#include<bits/stdc++.h>
using namespace std;

long long n, x, y;
long long a[1002][1002], b[1002], c[1002];

int main() {
    cin >> n;
    x = -2e12;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            b[i] += a[i][j];
        }
    }
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            c[j] += a[i][j];
        }
    }
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            y = b[i] + c[j] - a[i][j];
            if (y > x) {  
                x = y;
            }
        }
    }
    cout << x << endl;
}