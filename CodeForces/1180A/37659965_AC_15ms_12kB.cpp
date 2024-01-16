#include<bits/stdc++.h>
using namespace std;

int n, x;
int a[101];

int main() {
    cin >> n;
    x = 1;
    for (int i = 1; i <= n; i++) {
        x = x + (i-1)*4;
    }
    cout << x << endl;
}