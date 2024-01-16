#include <bits/stdc++.h>
using namespace std;

int n, x, ans;
int a[1001];

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = n; i >= 1; i--) {
        if (x > 0) {
            x = x - a[i];
            ans++;
        }
    }
    cout << ans << endl;
}