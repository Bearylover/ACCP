#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int main() {
    cin >> n;
    vector<int> v(n), dp(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    dp[1] = abs(v[0]-v[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = min(abs(v[i]-v[i-1])+dp[i-1], abs(v[i]-v[i-2])+dp[i-2]);
    }
    cout << dp[n-1] << endl;
}