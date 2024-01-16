#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int dp[305][180005];
int n, a[305];
char b;

int main() {
    cin >> n;
    cin >> a[1];
    int sum = a[1];
    for (int i = 2; i <= n; i++) {
        getchar();
        cin >> b;
        getchar();
        cin >> a[i];
        sum += a[i];
        if (b == '-') {
            a[i] =- a[i];
        }
    }
    if (sum%2 == 1) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= 2*sum; j++) {
                dp[i][j]=99999;
            }
        }
        dp[1][sum/2+a[1]]=0;
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (j >= a[i]) {
                    dp[i][j] = min(dp[i-1][j-a[i]], dp[i][j]);
                }
                if (j >= -a[i]) {
                    dp[i][j] = min(dp[i-1][j+a[i]]+1, dp[i][j]);
                }
            }
        }
        if (dp[n][sum/2] >= n) {
            cout << -1 << endl;
        } else {
            cout << dp[n][sum/2] << endl;
        }
    }
}