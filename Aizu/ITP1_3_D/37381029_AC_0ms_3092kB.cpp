#include<bits/stdc++.h>
using namespace std;

int a, b, c, x, n;

int main() {
    cin >> a >> b >> c;
    for(int i=a; i<=b; i++) {
        x = c%i;
        if (x<1) {
            n++;
        }
    }
    cout << n << endl;
}