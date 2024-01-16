#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, t, x;
ll dp[200005], a[200005]; 

int main() {
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) {
		  a[i] = INT_MAX;
		}
		for(int i = 1; i <= n; i++) {
			cin >> x;
			dp[i] = min(dp[i-1]+1, a[x]);
			a[x] = min(a[x], dp[i-1]);
		}
		cout << n - dp[n] << endl;
	}
}