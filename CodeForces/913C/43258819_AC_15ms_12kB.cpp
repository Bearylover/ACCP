#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll n, a[33], l, ans;

int main() {
	cin >> n >> l;
	for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
	for (int i = 2; i <= 32; i++) {
		if (a[i] > 2*a[i-1] || a[i] == 0) {
            a[i] = 2*a[i-1];
        }
    }
	for (int i = 1; i <= 32; i++) {
		if(a[i] < ans) {
            ans = a[i];
        }
		ans += (l&(1LL<<(i-1)))?a[i]:0;
	}
	cout << ans << endl;
}