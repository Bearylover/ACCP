#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a, n, k, l, ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ans = 1;
    l = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(a > n-k) {
            if (l) {
                ans = ans*(i-l)%998244353;
            }
            l = i;
        }
    }
    cout << (n+n+1-k)*k/2 << " " << ans << endl;
}