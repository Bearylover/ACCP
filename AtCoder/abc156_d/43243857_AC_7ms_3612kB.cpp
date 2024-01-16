#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

int n, a, b, ans;

ll power (ll a, ll b) {
    if (b == 0) {
        return 1;
    } else {
        return power(a*a%mod, b/2)*(b%2?a:1)%mod;
    }
}

ll f(int n,int k) {
	ll x = 1;
    ll y = 1;
	for(int i = 1; i <= k; i++) {
		x = x*(n-i+1)%mod;
		y = y*i%mod;
	}
	return x*power(y, mod-2)%mod;
}

int main() {
    fastio;
	cin >> n >> a >> b;
	ans = power(2,n);
	ans -= f(n,a);
	ans -= f(n,b);
    ans--;
	cout << (ans%mod+mod)%mod << endl;
}