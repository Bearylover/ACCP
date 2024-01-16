#include<bits/stdc++.h>
using namespace std;

int x, n;

int main() {
    cin >> x;
    for(int i=1; i<=x; i++) {
        if (x%i == 0) {
            n++;
        }
    }
    if (n == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}