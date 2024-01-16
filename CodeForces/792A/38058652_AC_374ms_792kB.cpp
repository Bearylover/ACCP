#include <bits/stdc++.h>
using namespace std;

int n, x, ans, y;
int a[200001];

int main() {
    ans = 2000000001;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        if (ans > a[i+1] - a[i] && i != n) {
            ans = a[i+1] - a[i];
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i+1] - a[i] == ans) {
            y++;
        }
    }
    cout << abs(ans) << " " << y << endl;
}