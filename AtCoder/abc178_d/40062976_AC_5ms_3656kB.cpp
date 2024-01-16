#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

ll n, dp[2001];

int main(){
    cin >> n;
    dp[0] = 1; dp[1] = 0; dp[2] = 0;
 
    for(int i=3; i<=2000; i++){
        dp[i] = (dp[i-3] + dp[i-1])%mod;
    }
    cout << dp[n] << endl;
}