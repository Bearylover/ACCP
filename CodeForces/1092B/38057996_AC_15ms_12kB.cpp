#include <bits/stdc++.h>
using namespace std;

int n, x, ans;
int a[1001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i = i + 2) {
        ans = ans + a[i+1] - a[i];
    }
    cout << ans << endl;
}