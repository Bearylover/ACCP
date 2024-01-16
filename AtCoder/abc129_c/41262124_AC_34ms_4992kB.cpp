#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll n, dp[100001], m, a[100001], temp;

int main() {
    temp = 1;
    dp[1] = 1;
    dp[2] = 2;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            dp[1] = 0;
            dp[2] = 1;
            temp++;
        }
        if (a[i] == 2) {
            dp[2] = 0;
            temp++;
        }
    }
    for(int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % mod;
        if (i == a[temp]) {
            dp[i] = 0;
            temp++;
        }
    }
    cout << dp[n] << endl;
}