#include <bits/stdc++.h>
using namespace std;

int n, x, ans, y, b;
int a[100001];

int main() {
    cin >> n >> b;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i < n; i++) {
        if (b >= a[i+1] - a[i]) {
            ans++;
            i++;
        }
    }
    cout << ans << endl;
}