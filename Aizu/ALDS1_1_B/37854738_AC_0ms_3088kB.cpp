#include <bits/stdc++.h>
using namespace std;

int a, b;

int gcd(int x, int y) {
    if (x == 0) {
        return y;
    }
    if (y == 0) {
        return x;
    }
    if (x >= y) {
        return gcd(x-y, y);
    } else {
        return gcd(x, y-x);
    }
}

int main() {
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}