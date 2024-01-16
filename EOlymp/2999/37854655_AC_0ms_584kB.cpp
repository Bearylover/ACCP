#include <bits/stdc++.h>
using namespace std;

int n, m, x;

int f(int a, int b) {
    if (a == 0 || a == b) {
        return 1;
    }
    if (0 < a && a < b) {
        x = f(a-1, b-1) + f(a, b-1);
        return x;
    }
    return 0;
}

int main() {
    cin >> n >> m;
    cout << f(m, n) << endl;
}