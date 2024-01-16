#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[200005];
int n, m, x, y;

int find(int x){
	if(a[x] == x) {
        return x;
	} else {
		a[x] = find(a[x]);
		return a[x];
	}
}

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	vector<int> vec[n+1];
	for(int i = 1; i <= m; i++){
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	int ans[n+2];
	ans[n+1] = 0;
	for(int i = n; i >= 1; i--){
		ans[i] = ans[i+1] + 1;
		for (int j = 0; j < vec[i].size(); j++){
			if (vec[i][j] > i){
				if (find(i) != find(vec[i][j])){
					ans[i]--;
				}
				a[find(i)] = find(vec[i][j]);
			}
		}
	}
	for(int i = 2; i <= n; i++){
		cout << ans[i] << endl;
	}
	cout << 0 << endl;
}