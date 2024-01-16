#include<bits/stdc++.h>
using namespace std;

int v, a, b, c, x;

int main() {
    cin >> v >> a >> b >> c;
    x = a + b + c;
    while (v >= x) {
        v = v-x;
    }
    v = v-a;
    if (v < 0) {
        cout << "F" << endl;
        return 0;
    }
    v = v-b;
    if (v < 0) {
        cout << "M" << endl;
        return 0;
    }
    v = v-c;
    if (v < 0) {
        cout << "T" << endl;
        return 0;
    }
}