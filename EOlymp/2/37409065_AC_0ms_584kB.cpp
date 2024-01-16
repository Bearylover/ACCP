#include<bits/stdc++.h>
using namespace std;

long n, x;

int main() {
    cin >> n;
    if (n == 0) {
        x++;
    }
    while (n > 0) {
        n = n/10;
        x++;
    }

    cout << x << endl;
}