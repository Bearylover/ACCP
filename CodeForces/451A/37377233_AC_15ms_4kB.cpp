#include<bits/stdc++.h>
using namespace std;

int m, n, x;

int main() {
    cin >> n >> m;
    if (n<m) {
        x = n%2;
    } else {
        x = m%2;
    }
    if (x > 0) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }
}