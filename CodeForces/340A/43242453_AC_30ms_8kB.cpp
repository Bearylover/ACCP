#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

ll x, y, a, b, bagi;

int main() {
    fastio;
    cin >> x >> y >> a >> b;
    bagi = lcm(x, y);
    cout << (b/bagi) - ((a-1)/bagi) << endl;;
}