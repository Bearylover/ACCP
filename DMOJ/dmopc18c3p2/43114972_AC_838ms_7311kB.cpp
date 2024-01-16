#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

ll n, t, i, j, ans;
ll a[100001], b[100001];
ll dp[100001][3];
 
int main() {
	fastio;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2])) + b[i];
        dp[i][1] = dp[i-1][0] + a[i];
        dp[i][2] = dp[i-1][1] + a[i];
    }
    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
}