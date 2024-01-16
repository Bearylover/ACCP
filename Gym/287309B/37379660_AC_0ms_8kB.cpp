#include<bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    x = -1;
    cin >> n;
    for(int i=2; i<=n; i=i+2) {
        cout << i << endl;
    }
    if (n<2) {
        cout << x << endl;
    }
}