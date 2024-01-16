#include <bits/stdc++.h>
using namespace std;

long long a, b;

int f(long long x) {
    x = x*x + 2*x + 3;
    return x;
}
int main() {
    cin >> a;
    b = f(f(f(a)+a)+f(f(a)));
    cout << b << endl;
}