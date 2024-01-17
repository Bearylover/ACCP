#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1001], b[1001], c[100001];
ll n, m, temp, ans;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());
    sort(c, c + m, greater<int>());
    for (int i = 0; i < m; i++) {
        if(v[temp].second <= 0) temp++;
        v[temp].second--;
        ans += v[temp].first*c[i];
    }
    cout << ans << endl;
} 
