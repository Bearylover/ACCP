#include <bits/stdc++.h>
using namespace std;

int n, x, y, z, xy, xz, yz, xyz, temp;
int a[5001];

int main() {
    cin >> n;
    cout << "? 1 2" << endl;
    cin >> xy;
    cout << "? 1 3" << endl;
    cin >> xz;
    cout << "? 2 3" << endl;
    cin >> yz;
    xyz = (xy + xz + yz)/2;
    x = xyz - yz;
    y = xyz - xz;
    z = xyz - xy;
    a[1] = x;
    a[2] = y;
    a[3] = z;
    for (int i = 4; i <= n; i++) {
        cout << "? 1 " << i << endl;
        cin >> temp;
        a[i] = temp - x;
    }
    cout << "! ";
    for (int i = 1; i <= n; i++) {
        cout << a[i];
        if (i == n) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    return 0;
}