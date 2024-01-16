#include <bits/stdc++.h>
using namespace std;

int a;

int f(int b) {
    if (b == 1) {
        return 1;
    }
    return b + f(b-1);
}

int main() {
    cin >> a;
    if (a == 0) {
        cout << a << endl;
        return 0;
    }
    cout << f(a) << endl;
}