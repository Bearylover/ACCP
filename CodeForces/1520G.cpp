#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define fi first
#define se second

ll n, m, w, ans, er, ec, sr, sc;
ll a[2002][2002], dist[3][2002][2002], mindist[3];
ll dr[4] = {0, 0, 1, -1}, dc[4] = {1, -1, 0, 0};

void f(ll id, ll x, ll y) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dist[id][i][j] = 1e18;
		}
	}
	mindist[id] = 1e18;
	queue<pii> q;
	dist[id][x][y] = 0;
	q.push({x, y});
	if (a[x][y] > 0) {
		mindist[id] = min(mindist[id], dist[id][x][y] + a[x][y]);
	}
	while (!q.empty()) {
		sr = q.front().first;
		sc = q.front().second;
		q.pop();
        for (int i = 0; i <= 3; i++) {
            er = sr+dr[i];
			ec = sc+dc[i];
            if (er < 1 || er > n || ec < 1 || ec > m || a[er][ec] == -1) {
            	continue;
			}
            if (dist[id][er][ec] > dist[id][sr][sc] + w) {
                dist[id][er][ec] = dist[id][sr][sc] + w;
				q.push({er,ec});
                if (a[er][ec]>0) {
                	mindist[id] = min(mindist[id], dist[id][er][ec]+a[er][ec]);
                }
            }
        }
	}
}

int main() {
	fastio;
    cin >> n >> m >> w;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= m; j++) {
    		cin >> a[i][j];
		}
	}
	f(1, 1, 1);
	f(2, n, m);
	ans = min(dist[2][1][1], mindist[1] + mindist[2]);
	if (ans == 1e18) {
		ans = -1;
	}
	cout << ans << endl;
}