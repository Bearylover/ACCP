#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

ll n, ans, l, r;
ll a[100001], b[100001];
ll dp[100001][3];
string s;
 
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        l = 0;
        r = 0;
        if (i > 0 && s[i-1] != s[i]) {
            l++;
            for (int k = i-2; k >= 0 && s[k] == s[i-1]; k--) {
                l++;
            }
        }
        if (i+1 < n && s[i+1] != s[i]) {
            r++;
            for (int k = i+2; k < n && s[k] == s[i+1]; k++) {
                r++;
            }
        }
        ans += l * r + max(l-1, (ll)0) + max(r-1, (ll)0);
    }
    cout << ans << endl;
}