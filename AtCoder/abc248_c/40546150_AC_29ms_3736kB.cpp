#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 998244353;

int n, m, k;

int main() {
    cin >> n >> m >> k;
    vector<vector<int>>dp(n + 1, vector<int>(k + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= k; j ++) {
            for (int l = 1; l <= m; l ++) {
                if (j < l) continue;
                dp[i][j] += dp[i - 1][j - l];
                dp[i][j] %= mod;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= k; i ++) {
        ans += dp[n][i]; ans %= mod;
    }
    cout << ans << endl;
}