#include <bits/stdc++.h>
using namespace std;

int n, x, ans, y, b, k;
int a[100001];

int main() {
    ans = 1000000001;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        if (i+k-1 <= n) {
            ans = min(ans, a[i+k-1] - a[i]);
        }
    }
    cout << ans << endl;
}