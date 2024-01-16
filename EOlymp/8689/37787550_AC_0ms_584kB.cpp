#include <bits/stdc++.h>
using namespace std;

long long x, n;

void quadr(long long d) {
    x = d*d + d + 1;
    cout << x << endl;
}
int main() {
    cin >> n;
    quadr(n);
}