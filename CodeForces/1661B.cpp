#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 32768;

int n, temp;
int a[32800], memo[32800][16];

int dp(int r, int s){
    if(s > 15){
        return 69696969;
    }
    if(r%32768 == 0){
        return 0;
    }
    if(memo[r][s] != -1){
        return memo[r][s];
    }
    return memo[r][s] = min(dp((r+1)%mod,s+1)+1, dp((r*2)%mod,s+1)+1);
}
 
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    memset(memo, -1, sizeof(memo));
    for(int i = 1; i <= n; i++) {
        temp = a[i];
        temp = dp(temp, 0); 
        cout << temp << endl;
    }
}