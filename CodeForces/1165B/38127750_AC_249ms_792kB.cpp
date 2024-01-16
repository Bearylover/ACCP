#include <bits/stdc++.h>
using namespace std;

int n, m, x, y;
int a[200001];

int main() {
    x = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        if (x <= a[i]) {
            x++;
            y++;
        }
    }
    cout << y << endl;
}