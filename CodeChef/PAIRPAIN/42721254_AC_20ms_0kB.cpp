#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

ll n, twocnt, ans, t, temp, onecnt;

int main() {
    fastio;
    cin >> t;
    while (t--) {
        ans = 0; twocnt = 0; onecnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> temp;
            if (temp == 1) {
                onecnt++;
            }
            if (temp == 2) {
                twocnt++;
            }
        }
        ans = ans + (onecnt*(n-onecnt)) + ((onecnt*(onecnt-1))/2);
        ans = ans + ((twocnt*(twocnt-1))/2);
        cout << ans << endl;
    }
}