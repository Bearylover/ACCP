#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, a;
bool dp[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    if(n > m){
        cout << "YES" << "\n";
        return 0;
    }
    for(int i = 1; i <= n; i++){
        cin >> a;
		dp[i - 1][m] = 1;
        for(int j = 0; j <= m; j++){
            dp[i][(j + a) % m] = dp[i - 1][j] || dp[i - 1][(j + a) % m];
        }
        if(dp[i][0]){
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}