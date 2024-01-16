#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 1e9;
int n, m, cnt, last, x, y, k;
queue<int> q;

int main() {
	cin >> n >> m;
    vector<int> v[n];
    vector<int> visited(n,false);
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		x--, y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cin >> k;
	for(int i=0;i<k;i++){
		int x;
		cin >> x;
		x--;
		q.push(x);
		visited[x] = true;
	}
	while(!q.empty()){
		int size = q.size();
		vector<int> lev;
		while(size--){
			int s = q.front();
			q.pop();
			for(auto x : v[s]){
				if(!visited[x]){
					visited[x] = true;
					lev.push_back(x);
					last = x;
					q.push(x);
				}
			}
		}
		if(lev.size())cnt++;
		for(auto y : lev)
			last = min(last,y);
	}
	cout << cnt << endl << last+1 << endl;
}