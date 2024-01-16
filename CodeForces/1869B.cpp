#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, t, ans, temp, x, y, a, b, k;
ll arr[200001], brr[200001];

int main() {
	fastio;
    cin >> t;
    while (t--) {
    	x = 1e18;
    	y = 1e18;
    	cin >> n >> k >> a >> b;
    	for (int i = 1; i <= n; i++) {
    		cin >> arr[i] >> brr[i];
    		//arr = x cord, b = y cord
		}
		temp = abs(arr[a]-arr[b]) + abs(brr[a]-brr[b]);
		for (int i = 1; i <= k; i++) {
			x = min(x, abs(arr[i]-arr[b]) + abs(brr[i]-brr[b]));
		}
		for (int i = 1; i <= k; i++) {
			y = min(y, abs(arr[i]-arr[a]) + abs(brr[i]-brr[a]));
		}
		cout << min(temp, x+y) << endl;
	}
}