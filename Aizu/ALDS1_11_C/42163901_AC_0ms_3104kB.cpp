#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, d[101], u, k, v;
bool a[101][101] = {};

void bfs(int u){
    queue<int> q;
    q.push(u);
    d[u] = 0;
    while(q.size()){
        int p = q.front();
        q.pop();
        for(int i = 2; i <= n; i++){
            if(a[p][i] && d[i] == 0){
            q.push(i);
            d[i] = d[p] + 1;
            }
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> u >> k;
        for(int j = 0; j < k; j++){
            cin >> v;
            a[u][v] = true;
        }
    }
    bfs(1);
    for(int i = 1; i <= n; i++) {
        if(d[i] || i == 1) cout << i << " " << d[i] << endl;
        else cout << i << " " << -1 << endl;
    }
}