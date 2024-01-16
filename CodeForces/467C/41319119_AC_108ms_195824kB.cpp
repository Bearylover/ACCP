#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll n, m, k, s[5001], dp[5001][5001], i, j;
int main() {
    cin >> n >> m >> k;
    for (i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] += s[i-1];
    }
    for (i = 1; i <= k; i++) {
        for(j = i*m; j <= n; j++) {
            dp[i][j] = max(dp[i][j-1], dp[i-1][j-m]+s[j]-s[j-m]);
        }
    }
    cout << dp[k][n] << endl;
}