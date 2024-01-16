#include<bits/stdc++.h>
using namespace std;

double n, m, k, x, y, z;
double a[101];

int main() {
    cin >> n >> k >> m;
    for (int i = 1; i<=n-1; i++) {    
        cin >> a[i];
        y = y + a[i];
    }
    for (double i = 0; i<=k+1; i++) {
        if ((y+i)/n<=m) {
            z = i;
        }
    }
    if (z == k+1) {
        z = -1;
    }
    cout << z << endl;
}