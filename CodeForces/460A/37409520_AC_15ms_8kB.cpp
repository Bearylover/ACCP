#include<bits/stdc++.h>
using namespace std;

long m, n, x;

int main() {
    cin >> n >> m;
    while (n > 0) {
        n = n - 1;
        x++;
        if (x%m == 0) {
            n++;
        }
    }
    cout << x << endl;
}