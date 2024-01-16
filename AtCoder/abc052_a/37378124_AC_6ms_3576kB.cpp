#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, x, y;

int main() {
    cin >> a >> b >> c >> d;
    x = a*b;
    y = c*d;
    if (x>y) {
        cout << x << endl;
    } else {
        cout << y << endl;
    }
}