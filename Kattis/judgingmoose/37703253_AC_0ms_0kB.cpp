#include<bits/stdc++.h>
using namespace std;

int a, b, x;

int main() {
    cin >> a >> b;
    if (a > b) {
        x = a;
    } else {
        x = b;
    }
    if (a == 0 && b == 0) {
        cout << "Not a moose" << endl;
    } else if (a == b) {
        cout << "Even " << a*2 << endl;
    } else {
        cout << "Odd " << x*2 << endl; 
    }
}