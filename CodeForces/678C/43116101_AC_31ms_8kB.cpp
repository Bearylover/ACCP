#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

ll n, a, b, p, q, ans;

int main() {
    fastio;
    cin >> n >> a >> b >> p >> q;
    if (p > q) {
        ans = (n/a)*p + (n/b)*q - (n/lcm(a, b))*(q);
        cout << ans << endl;
    } else {
        ans = (n/a)*p + (n/b)*q - (n/lcm(a, b))*(p);
        cout << ans << endl;
    }
}