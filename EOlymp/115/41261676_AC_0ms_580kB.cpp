#include <bits/stdc++.h>
using namespace std;

int n, m[31];

int main() {
    cin >> n;
    m[1] = 2;
    m[2] = 4;
    for(int i = 3; i <= n; i++) {
        m[i] = m[i-1] + m[i-2];
    }
    cout << m[n] << endl;
}