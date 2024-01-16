#include<bits/stdc++.h>
using namespace std;

int a, h, x, y;

int main() {
    cin >> h >> a;
    x = h%a;
    if (x < 1) {
        y = 0;
    } else {
        y = 1;
    }
    cout << (h/a)+y << endl;
}