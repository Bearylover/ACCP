#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, temp, a[2001], b[2001], dp[2001][2001], ans[2001], m;
ll length;

int lcs(int m, int n) {
    if (m == 0 || n == 0)
        return 0;
    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    if (a[m] == b[n])
        return dp[m][n] = 1 + lcs(m - 1, n - 1);
    return dp[m][n] = max(lcs(m, n - 1), lcs(m - 1, n));
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    memset(dp, -1, sizeof(dp));
    length = lcs(n, m);
    cout << length << endl;
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (a[i] == b[j]) {
            ans[lcs(i, j)] = a[i];
            i--;
            j--;
        } else if (lcs(i-1, j) > lcs(i, j-1)) {
            i--;
        } else {
            j--;
        }
    }
    for (int i = 1; i <= length; i++) {
        cout << ans[i];
        if (i == length) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}