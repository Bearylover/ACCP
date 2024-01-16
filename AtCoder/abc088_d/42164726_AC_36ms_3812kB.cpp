#include <bits/stdc++.h>
using namespace std;
#define int long long

const int inf = 9e18;
int a[4] = {0, 1, 0, -1};
int b[4] = {1, 0, -1, 0};
int n, m, dp[51][51], cnt;
char s[51][51];

void dfs(int x, int y, int step){
	if (step >= dp[x][y]) return ;
	dp[x][y] = step;
	for (int i = 0; i < 4; i++) {
		if (s[x + a[i]][y + b[i]] == '.') dfs(x + a[i], y + b[i], step + 1);
	}
}

signed main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> s[i][j];
			dp[i][j] = inf;
			if (s[i][j] == '#') cnt++;
		}
	}
	dfs(1, 1, 1);
    cout << max(n * m - dp[n][m] - cnt, (int)-1) << endl;
}