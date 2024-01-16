#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 100000000;

int dp[101][101][2];
int n, m, k1, k2;

int main() {
    while (scanf("%d%d%d%d", &n, &m, &k1, &k2) == 4) {
        memset(dp, 0, sizeof(dp));
        dp[0][0][0] = dp[0][0][1] = 1;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                for (int k = 1; k <= k1 && k <= i; k++) {
                    dp[i][j][0] += dp[i-k][j][1];
                    dp[i][j][0] %= mod;
                }
                for (int k = 1; k <= k2 && k <= j; k++) {
                    dp[i][j][1] += dp[i][j-k][0];
                    dp[i][j][0] %= mod;
                }
            }
        }
        cout << (dp[n][m][0] + dp[n][m][1]) % mod << endl;
    } 
}