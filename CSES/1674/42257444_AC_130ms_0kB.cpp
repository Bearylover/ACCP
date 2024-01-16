#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int n, boss;
vector<vector<int>> adj(200001);
vector<int> a(200001);

int nope (int node) {
    if (adj[node].size() == 0) {
        return 1;
    } else {
        for (int i = 0; i < adj[node].size(); i++) {
            a[node] += nope(adj[node][i]);
        }
    }
    return a[node] + 1;
}

int main() {
    cin >> n;
    for (int i = 2; i <= n; i++) {
        cin >> boss;
        adj[boss].push_back(i);
    }
    nope(1);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}