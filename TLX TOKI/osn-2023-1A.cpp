#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

ll n, temp, mx;
ll a[200001], dp[200001], freq[200001];

int main() {
	fastio;
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> temp;
    	a[i] = i-temp+1;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] > 0) {
			freq[a[i]]++;
			mx = max(freq[a[i]], mx);
		}
		dp[i] = mx;
		freq[i+1] = mx;
	}
	cout << n - dp[n] << endl;
}
