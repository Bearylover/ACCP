#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, m, j, l, r, mid, a, b;
bool bcheap = false;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        bcheap = false;
        cin >> n >> a >> b;
        if (a*2 >= b) {
            bcheap = true;
        }
        if (bcheap == true) {
            if (n%2 == 1) {
                cout << ((n/2)*b) + a << endl;
            } else {
                cout << ((n/2)*b) << endl;
            }
        } else {
            cout << n*a << endl;
        }
    }
}