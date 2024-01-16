#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

int n, k;
ll a[100001], dp[100001];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        dp[i] = 1e13;
    }
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i-k; j < i; j++) {
            if (j < 0) continue;
            dp[i] = min(dp[i], dp[j] + abs(a[i] - a[j]));
        }
    }
    cout << dp[n-1];
}