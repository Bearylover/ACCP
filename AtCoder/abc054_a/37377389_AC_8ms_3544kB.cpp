#include<bits/stdc++.h>
using namespace std;

int a, b, x;

int main() {
    cin >> a >> b;
    if (a < 2) {
        a = 14;
    }
    if (b < 2) {
        b = 14;
    }
    if (a>b) {
        cout << "Alice" << endl;
    } else if (b>a) {
        cout << "Bob" << endl;
    } else {
        cout << "Draw" << endl;
    }
}