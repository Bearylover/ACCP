#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, u, v;
bool sus, vis[100001], group[100001];
vector<int> a[100001];

void dfs(int x = 1, bool g = 0) {
    vis[x] = 1;
    group[x] = g;
    for(int u : a[x]) {
        if (vis[u] == true) {
            if (group[u] == g) {
                sus = 1;
            }
        }
        else dfs(u, !g);
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1; sus == false && i <= n; i++) {
        if (vis[i] == false) {
            dfs(i);
        }
    }
    if (sus == true) {
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        for(int i = 1; i <= n; i++) {
            cout << group[i] + 1 << " ";
        }
    }
    return 0;
}