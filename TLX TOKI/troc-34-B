#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, k, x, ans, temp;
ll a[100001];

 
int main() {
	fastio;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		temp = max(temp, a[i]);
		x += a[i];
	}
	if (temp <= x/2) {
		cout << x << endl;
	} else {
		cout << 2*temp-1 << endl;
	}
}
