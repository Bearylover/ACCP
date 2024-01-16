#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, x, a, b, temp, maxsize;
bool vis[200001];
vector<int> adj[200001];

void dfs(int x) {
    if (vis[x]) {
        return;
    }
    vis[x] = true;
    temp++;
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
            temp = 0;
            dfs(i);
            maxsize = max(maxsize, temp);
        }
    }
    cout << maxsize << endl;
}