#include<bits/stdc++.h>
using namespace std;

long x, y, a, n;

int main() {
    cin >> x >> y;
    a = y;
    while (a >= x) {
        a = a/2;
        n++;
    }
    cout << n << endl;
}