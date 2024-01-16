#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, b;
int a[200001];
ll ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        b = 1;
        while (i * b <= n) {
            a[i * b]++;
            b++;
        }
    }
    for (int i = 1; i < n; i++) {
        int x = i, y = n - i;
        ans += a[x] * a[y];
    }
    cout << ans << endl;
}