#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> tree[100001];
int cat[100001];
void dfs(int v, int p, int d, int m, int &ans) {
    if(cat[v] == 1) {
        d++;
    }
    else {
        d = 0;
    }
    if (d > m) {
        return;
    }
    if(tree[v].size() == 1 && v != 1) {
        ans += 1;
        return;
    }
    for(auto i : tree[v]) {
        if(i != p)
        dfs(i, v, d, m, ans);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> cat[i];
    }
    for(int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    int ans = 0;
    dfs(1, -1, 0, m, ans);
    cout << ans << endl;
}