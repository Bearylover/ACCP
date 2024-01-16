#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, l, r, cnt, ans, cd;

void solve(ll x, ll y, ll l, ll r, ll d) {
    if (x > y || l > r) {
        return;
    } else {
        ll mid = (x+y)/2;
        if (r < mid) {
            solve(x, mid-1, l, r, d/2);
        } else if (mid < l) {
            solve(mid+1, y, l, r, d/2);
        } else {
            ans += d%2;
            solve(x, mid-1, l, mid-1, d/2);
            solve(mid+1, y, mid+1, r, d/2);
        }
    }
}

int main(){
    cin >> n >> l >> r;
    cd = n;
    cnt = 1;
    while (cd >= 2){
        cd = cd/2;
        cnt = cnt*2+1;
    }
    solve(1, cnt, l, r, n);
    cout << ans << endl;
}
