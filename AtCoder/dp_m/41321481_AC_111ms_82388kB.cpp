#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

int n, k, dp[101][100001], psum[101][100001], a[101];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[n][0] = 1;
    for(int j = 1; j <= k; j++) {
        dp[n][j] = 0;
     }
    psum[n][0] = dp[n][0];
    for(int j = 1; j <= k; j++) {
        psum[n][j] = dp[n][j] + psum[n][j-1];
    }
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= k; j++) {
            int l = j - min(a[i], j);
            int r = j;
            dp[i][j] = l ? psum[i+1][r] - psum[i+1][l-1] : psum[i+1][r];
            dp[i][j] = (dp[i][j]%mod + mod) % mod;
            }
        psum[i][0] = dp[i][0];
        for(int j = 1; j <= k; j++) {
            psum[i][j] = (dp[i][j] + psum[i][j-1]) % mod;
        }
    }
      cout << dp[0][k] << endl;
    }