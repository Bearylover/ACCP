#include<bits/stdc++.h>
using namespace std;

int n, m, x;
int a[101];

int main() {
    cin >> n >> m;
    x = n%m;
    for (int i = 1; i <= m; i++) {
        a[i] = n/m;
    }
    while (x > 0) {
        a[m-x+1] = a[m-x+1] + 1;
        x--;
    }
    for (int i = 1; i <= m; i++) {
        cout << a[i];
        if (i == m) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}