#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 998244353;

ll n;
ll a[200001];

int main() {
	fastio;
	cin >> n;
	a[0] = 1;
	for (int i = 1; i <= n; i++) {
		a[i] = (10*a[i-1])%mod;
	}
	for (int i = 1; i < n; i++) {
		cout << (18*a[n-i] + 81*a[n-i-1]*(n-i-1))%mod << endl;
	}
	cout << 10 << endl;
}