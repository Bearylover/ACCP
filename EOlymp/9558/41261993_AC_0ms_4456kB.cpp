#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int n, m[1000001];

int main() {
    cin >> n;
    m[1] = 2;
    m[2] = 2;
    for(int i = 3; i <= n; i++) {
        m[i] = (m[i-1] + m[i-2]) % mod;
    }
    cout << m[n] << endl;
}