#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll n, m, a[100001], b[100001], c[100001], d[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    a[0] = 1;
    if (n == 1) {
        for (int i = 1; i <= m; i++) {
            b[i] = a[i-1] + b[i-1];
            a[i] = 2*b[i];
            b[i] = b[i]%mod;
            a[i] = a[i]%mod;
        }
    } else {
        for (int i = 1; i <= m; i++) {
            b[i] = a[i-1]*2 + c[i-1]*3 + d[i-1]*2;
            c[i] = a[i-1] + b[i-1]*3 + d[i-1]*2;
            d[i] = a[i-1] + b[i-1] + c[i-1] + d[i-1]*3;
            a[i] = b[i] + c[i]*2 + d[i]*2;
            b[i] = b[i]%mod;
            c[i] = c[i]%mod;
            d[i] = d[i]%mod;
            a[i] = a[i]%mod;
        }
    }
    cout << a[m] << endl;
} 
