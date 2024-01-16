#include <bits/stdc++.h>
using namespace std;

long long n, total;

void solve(long long x) {
    if (x <= n) {
        total++;
        solve(x*10 + 2);
        solve(x*10 + 3);
    }
}

int main() {
    cin >> n;
    solve(0);
    cout << total - 1 << endl;
}