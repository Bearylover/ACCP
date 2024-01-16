#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a, b, c, d;
char S[10];

ll ans = 1LL<<61;
void solve2(ll a,ll b) {
    ll x = (S[4] == '+') ? (a + b) : (a * b);
    if (ans > x) {
        ans = x;
    }
}
void solve3(ll a,ll b,ll c) {
    if (S[3] == '+') {
        solve2(a + b, c);
        solve2(a + c, b);
        solve2(b + c, a);
    } else {
        solve2(a * b, c);
        solve2(a * c, b);
        solve2(b * c, a);
    }
}
void solve4(ll a,ll b,ll c,ll d) {
    if (S[2] == '+') {
        solve3(a + b, c, d);
        solve3(a + c, b, d);
        solve3(a + d, b, c);
        solve3(b + c, a, d);
        solve3(b + d, a, c);
        solve3(c + d, a, b);
    } else {
        solve3(a * b, c, d);
        solve3(a * c, b, d);
        solve3(a * d, b, c);
        solve3(b * c, a, d);
        solve3(b * d, a, c);
        solve3(c * d, a, b);
    }
}

int main() {
    cin >> a >> b >> c >> d;
    for(int i = 2; i <= 4; i++)
        cin >> S[i];
    solve4(a, b, c, d);
    cout << ans << endl;
}