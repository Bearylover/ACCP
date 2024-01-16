#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int n, ans;
int a[3001], b[3001], vis[2001][2001];

int main() {
    cin >> n;
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        a[i] += 1000;
        b[i] += 1000;
        vis[a[i]][b[i]]++;
    }
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((a[i]+a[j])%2 == 0 && (b[i]+b[j])%2 == 0 && i != j)
                ans += vis[(a[i]+a[j])/2][(b[i]+b[j])/2];
        }
    }
    cout << ans/2 << endl;
}