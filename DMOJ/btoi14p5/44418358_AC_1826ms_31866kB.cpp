#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

int n, m, i, j, ansx, ansy;
char c[1001][1001];
int a[1001][1001], ans[1001][1001], wx[1001][1001][2], wy[1001][1001][2];
queue<pii> q;
priority_queue< pair<int, pii> > q2;

void bfs(int x, int y) {
    if (x >= 0 && y >= 0 && x < m && y < n && a[y][x] == -1) {
        if (j < 0 || j == m || i < 0 || i == n) {
            a[y][x] = 1;
        }
        else {
            a[y][x] = a[j][i] + 1;
        }
        q.push(make_pair(x, y));
    }
}

void f(int x, int y, int d) {
    if (x >= 0 && y >= 0 && x < m && y < n && (ans[y][x] == -1 || ans[y][x] > ans[j][i] + d) && c[y][x] != '#') {
        ans[y][x] = ans[j][i] + d;
        q2.push(make_pair(-ans[y][x], make_pair(x, y)));
    }
}

int main() {
    cin >> n >> m;
    for (j = 0; j < n; j++) {
        cin >> c[j];
        for (i = 0; i < m; i++) {
            a[j][i] = -1;
            ans[j][i] = -1;
            switch (c[j][i]) {
                case 'S': {
					ans[j][i] = 0;
					q2.push(make_pair(0, make_pair(i, j)));
					break;
				}
                case 'C': {
					ansx = i;
					ansy = j;
					break;
				}
                case '#': {
					a[j][i] = 0;
					q.push(make_pair(i, j));
					break;
				}
            }
        }
        q.push(make_pair(-1, j));
        q.push(make_pair(m, j));
    }
    for (i = 0; i < m; i++) {
        q.push(make_pair(i, -1));
        q.push(make_pair(i, n));
    }
    
    while (q.size()) {
        i = q.front().first;
        j = q.front().second;
        q.pop();
        bfs(i, j-1);
        bfs(i, j+1);
        bfs(i-1, j);
        bfs(i+1, j);
    }
    
    for (j = 0; j < n; j++)
        for (i = 0; i < m; i++) {
            wy[j][i][0] = (j == 0 || c[j-1][i] == '#') ? j : wy[j-1][i][0];
            wx[j][i][0] = (i == 0 || c[j][i-1] == '#') ? i : wx[j][i-1][0];
        }
        
    for (j = n-1; j >= 0; j--)
        for (i = m-1; i >= 0; i--) {
            wy[j][i][1] = (j == n-1 || c[j+1][i] == '#') ? j : wy[j+1][i][1];
            wx[j][i][1] = (i == m-1 || c[j][i+1] == '#') ? i : wx[j][i+1][1];
        }
    
    while (q2.size()) {
        i = q2.top().se.fi;
        j = q2.top().se.se;
        q2.pop();
	if (c[j][i] == 'C') break;
        f(i, j-1, 1);
        f(i, j+1, 1);
        f(i-1, j, 1);
        f(i+1, j, 1);
        f(wx[j][i][0], j, a[j][i]);
        f(wx[j][i][1], j, a[j][i]);
        f(i, wy[j][i][0], a[j][i]);
        f(i, wy[j][i][1], a[j][i]);
    }
    cout << ans[ansy][ansx] << endl;
}