#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
const ll mod = 1e9+7;

struct UnionFind {
    vector<int> parent;
    vector<int> size;
    UnionFind(int n): parent(n, -1), size(n, 1) {}
    int find(int i) {
        return parent[i] < 0 ? i : parent[i] = find(parent[i]);
    }
    bool cek(int i, int j) {
        if ((i = find(i)) == (j = find(j))) return false;
        if (parent[i] == parent[j]) parent[j]--;
        if (parent[i] < parent[j]) swap(i, j);
        size[j] += size[i];
        parent[i] =  j;
        return true;
    }
    int getsize(int i) {
        return size[find(i)];
    }
};

int main() {
    int n, e, q;
    cin >> n >> e >> q;
    vector<pair<ll, pii>> edges(e);
    while (e--) {
        ll c, i, j;
        cin >> i >> j >> c;
        edges.push_back({c, {--i, --j}});
    }
    vector<ll> queries(q);
    while (q--) {
    	cin >> queries[q];
	}
    sort(edges.rbegin(), edges.rend());
    sort(queries.rbegin(), queries.rend());
    UnionFind uf(n);
    ll ans = 1, temp = (ll) n * (n - 1);
    while (!queries.empty()) {
        for (ll c = queries.back(); !edges.empty() && edges.back().fi <= c; edges.pop_back()) {
            auto [i, j] = edges.back().se;
            if (ll v = 2*uf.getsize(i) * uf.getsize(j); uf.cek(i, j)) temp -= v;
        }
        ans = temp % mod * ans % mod;
        queries.pop_back();
    }
    cout << ans << endl;
}