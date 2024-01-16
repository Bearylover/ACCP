#include <bits/stdc++.h>
using namespace std;
#define ll long long

int t, n, m, j, ans;

void solve(){
    cin >> n;
    vector<ll> x(n), y(n);
    vector<pair<ll, int>> vect(n);
    for(auto &i : x) cin >> i;
    for(auto &i: y) cin >> i;
    for(int i = 0; i < n; i++){
        vect[i].first = y[i] - x[i];
        vect[i].second = i;
    }
    sort(vect.begin(), vect.end());
    reverse(vect.begin(), vect.end());
    j = n - 1;
    ans = 0;
    for(int i = 0; i < n; i++){
        while(j > i && vect[i].first + vect[j].first < 0) j--;
        if(j <= i) break;
        ans++; j--;
    }
    cout << ans << endl;
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
}