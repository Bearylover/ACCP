#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[1001], per[1001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        per[i] = i;
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        if (a[i] == per[i]) {
            x++;
        }
    }
    if (x == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}