#include<bits/stdc++.h>
using namespace std;

int n, x, y, k, z;
int a[101];

int main() {
    cin >> n >> k;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
    }
    for (int i = 1; i<=n; i++) {
        if (k>=a[i]) {
            x++;
        } else {
            break;
        }
    }
    if (x != n) {
    for (int i = n; i>=1; i--) {
        if (k>=a[i]) {
            x++;
        } else {
            break;
        }
    }
    }
    cout << x << endl;
}