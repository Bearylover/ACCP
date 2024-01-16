#include<bits/stdc++.h>
using namespace std;

long long n, x, y, z;
long long a[200001];

int main() {
    cin >> n;
    for (long long i = 1; i<=n; i++) {    
        cin >> a[i];
    }
    for (long long i = 1; i<=n; i++) {
        if (a[i]>y) {
            y = a[i];
        } else {
            x = x + (y-a[i]);
            a[i] = y;
        }
    }
    cout << x << endl;
}