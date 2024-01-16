#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, b, temp, group;
int a[1001][1001];
bool vis[1001][1001];
char c;

void dfs(int x, int y) {
    vis[x][y] = true;
    if (vis[x+1][y] == false && a[x+1][y] == 1) {
        dfs(x+1, y);
    }
    if (vis[x-1][y] == false && a[x-1][y] == 1) {
        dfs(x-1, y);
    }
    if (vis[x][y+1] == false && a[x][y+1] == 1) {
        dfs(x, y+1);
    }
    if (vis[x][y-1] == false && a[x][y-1] == 1) {
        dfs(x, y-1);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> c;
            if (int(c) == 35) {
                a[i][j] = 0;
            } else {
                a[i][j] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (vis[i][j] == false && a[i][j] == 1) {
                dfs(i, j);
                group++;
            }
        }
    }
    cout << group << endl;
}