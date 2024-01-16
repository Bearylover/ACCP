#include <bits/stdc++.h>
using namespace std;

long long n, m, x, y;
long long a[27];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = n - 1; i >= 1; i--) {
        if (a[i] >= a[i+1]) {
            a[i] = a[i+1] - 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        x = x + a[i];
    }
    cout << x << endl;
}