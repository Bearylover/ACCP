#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, f[37], divider, a[6];

int main() {
    divider = 1e10 + 7;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for (int i = 4; i <= 36; i++) {
        if (f[i] == 0) {
            f[i] = (f[i-1] + f[i-2] + f[i-3])%divider;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << f[a[i]] << endl;
    }
}