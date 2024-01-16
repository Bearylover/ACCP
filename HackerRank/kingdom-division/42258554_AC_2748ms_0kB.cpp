#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

const ll mod = 1e9 + 7;
vector<pll> dp;
int n, a, b;
vector<vector<int>> ans;

void dfs(int cur, int par){
    vector<pll> val;
    dp[cur] = mp(0, 1);
    for(int e : ans[cur]){
        if(e != par){
            dfs(e, cur);
            val.pb(dp[e]);
            dp[cur].first = (dp[cur].first * (2*dp[e].first+dp[e].second) + dp[cur].second*(dp[e].first+dp[e].second))%mod;
            dp[cur].second = dp[cur].second*dp[e].first%mod;
        }
    }
}

int main() {
    cin >> n;
    ans.resize(n);
    dp.resize(n);
    for(int i = 1; i < n; i++) {
        cin >> a >> b;
        ans[a-1].pb(b-1);
        ans[b-1].pb(a-1);
    }
    dfs(0, -1);
    cout << (2*dp[0].first)%mod << endl;
}