#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, x, a, b;
bool connected = true;
bool vis[200001];
vector<int> adj[200001];

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
    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (vis[i] == false) {
            cout << i << endl;
            connected = false;
        }
    }
    if (connected == true) {
        cout << "Connected" << endl;
    }
}