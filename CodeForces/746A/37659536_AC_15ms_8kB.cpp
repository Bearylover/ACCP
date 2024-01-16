#include<bits/stdc++.h>
using namespace std;

int a, b, c, x;

int main() {
    cin >> a >> b >> c;
    while (a >= 0 && b >= 0 && c >= 0) {
        a = a - 1;
        b = b - 2;
        c = c - 4;
        if (a >= 0 && b >= 0 && c >= 0) {
            x = x + 7;
        }
    }
    cout << x << endl;
}