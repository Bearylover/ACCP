#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, x, y, temp, ans, total1, total2, i, j;
ll a[200001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    i = 1;
    j = n;
    total1 = a[i];
    total2 = a[n];
    while (i < j) {
        if (total1 == total2) {
            ans = max(ans, total1);
            i++;
            j--;
            total1 += a[i];
            total2 += a[j];
        } else if (total1 < total2) {
            i++;
            total1 += a[i];
        } else {
            j--;
            total2 += a[j];
        }
    }
    cout << ans << endl;
}