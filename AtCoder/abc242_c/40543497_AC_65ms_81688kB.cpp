#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, dp[1000001][10], ans;
const ll mod = 998244353;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= 9; j++) {
            if(i==1){
                dp[i][j]=1;
            } else if (j==1) {
                dp[i][j] = (dp[i-1][j+1] + dp[i-1][j])%mod;
            } else if (j==9) {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod;
            } else {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1] + dp[i-1][j])%mod;
            }
        }
    }
    for(int i=1; i<=9; i++){
        ans+=dp[n][i];
        ans%=mod;
    }
    cout << ans << endl;
}