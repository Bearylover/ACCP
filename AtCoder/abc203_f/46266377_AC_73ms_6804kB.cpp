#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

ll n, k, temp;
ll arr[200001], dp[200001];

int main(){
	fastio;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	sort(arr+1, arr+n+1);
	for (int i = 1; i <= k; i++) {
		dp[i] = 1e18;
	}
	dp[0] = n;
	for (int h = 1; h <= 50; h++) {
		for (int i = 1; i <= k; i++) {
			dp[i] = min(dp[i], dp[i-1]-1);
		}
		for (int i = 0; i <= k; i++) {
			if (dp[i] == 0) {
				cout << h-1 << " " << i << endl;
				return 0;
			}
		}
		for (int i = 0; i <= k; i++) {
			dp[i] = upper_bound(arr+1, arr+n+1, arr[dp[i]]/2)-arr-1;
		}
	}
}