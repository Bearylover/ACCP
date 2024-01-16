#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int n, q, a, b, p, x;
vector<int> to[200005];
vector<int> ans;
 
void dfs(int v, int p = -1){
    for(int u : to[v]){
        if(u == p) continue;
        ans[u] += ans[v];
        dfs(u, v);
    }
}

int main(){
    cin >> n >> q;
    for(int i = 0; i < n - 1; i++){
        cin >> a >> b;
        a--;
        b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    ans.resize(n);
    for(int i = 0; i < q; i++){
        cin >> p >> x;
        p--;
        ans[p] += x;
    }
    dfs(0);
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}