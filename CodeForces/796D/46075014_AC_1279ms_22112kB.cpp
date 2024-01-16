#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second

ll n, k, d, u, v, temp, cnt, pos, memo;
ll a[300001], ans[300001];
queue<pii> q;
vector<pii> adj[300001];

int main(){
    cin >> n >> k >> d;
    for(int i = 0; i < k; i++){
        cin >> temp;
        q.push({temp, 0});
    }
    for(int i = 0; i < n-1; i++){
        cin >> u >> v;
        adj[u].pb({v, i+1});
        adj[v].pb({u, i+1});
    }
    while(!q.empty()){
        pos = q.front().fi;
        memo = q.front().se;
        q.pop();
        if (a[pos] != 0) {
			continue;
		}
        a[pos] = 1;
        for (int i = 0; i < adj[pos].size(); i++) {
			if (adj[pos][i].fi != memo) {
	            if (a[adj[pos][i].fi]) {
					ans[adj[pos][i].se] = 1;
				} else {
					q.push({adj[pos][i].fi, pos});
				}
	        }
    	}
    }
    for (int i = 1; i < n; i++) {
    	if (ans[i]) {
    		cnt++;
		}
	}
    cout << cnt << endl;
    for (int i = 1; i < n; i++) {
    	if (ans[i]) {
    		cout << i << " ";
		}
	}
}