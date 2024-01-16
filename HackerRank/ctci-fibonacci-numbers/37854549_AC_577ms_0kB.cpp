#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[30];

int main() {
    cin >> n;
    a[0] = 0;
    a[1] = 1;
    if (a == 0) {
        cout << a << endl;
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n] << endl;
}