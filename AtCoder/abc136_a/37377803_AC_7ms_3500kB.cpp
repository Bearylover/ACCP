#include<bits/stdc++.h>
using namespace std;

int a, b, c, x, y;

int main() {
    cin >> a >> b >> c;
    x = a-b;
    y = c-x;
    if (y<0) {
        y = 0;
    }
    cout << y << endl;
}