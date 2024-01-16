#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

int n, dp[1000001];

int main() {
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 6;
    for (int i = 4; i <= n; i++) {
        dp[i] = (2*(dp[i-1]))%mod - dp[i-3]%mod;
        dp[i] = (dp[i]%mod+mod)%mod;
    }
    cout << dp[n] << endl;
}