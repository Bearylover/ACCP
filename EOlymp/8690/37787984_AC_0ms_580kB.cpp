#include <bits/stdc++.h>
using namespace std;

long long x, m, n, o;

void quadr(long long a, long long b, long long c) {
    x = a*b*c + a + b*b + c*c*c;
    cout << x << endl;
}
int main() {
    cin >> m >> n >> o;
    quadr(m, n, o);
}