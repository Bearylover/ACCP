#include <bits/stdc++.h>
using namespace std;

int a;

void f(int n) {
    if (n > 0) {
        f(n-1);
        cout << n << endl;
    }
}

int main() {
    cin >> a;
    f(a);
}