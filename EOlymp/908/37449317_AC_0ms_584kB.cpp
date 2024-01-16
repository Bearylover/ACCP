#include<bits/stdc++.h>
using namespace std;

int n, x, y;
int a[101];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
        if (a[i]%6 == 0 && a[i]>0) {
            y = y + a[i];
            x++;
        }
    }
    cout << x << " " << y << endl;
}