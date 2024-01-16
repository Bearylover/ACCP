#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, x, a, b, group;
bool vis[10001];
vector<int> adj[10001];

void dfs(int x) {
    if (vis[x]) {
        return;
    }
    vis[x] = true;
    for (int y : adj[x]) {
        dfs(y);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == false) {
            dfs(i);
            group++;
        }
    }
    cout << group - 1 << endl;
}