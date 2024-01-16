#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

int n, dp[100001];

int sqr(int n, int j) {
	int ret = 1;
	for (int i = 0; i < j; i++) {
        ret = ret*n;
    }
	return ret;
}
 
int main() {
	cin >> n;
	for (int i = 0; i <= n; i++) {
        dp[i] = i;
    }
	for (int i = 0; i < n; i++) {
		for (int j = 1;; j++) {
			if (i + sqr(6, j) > n) {
                break;
            }
			dp[i + sqr(6, j)] = min(dp[i + sqr(6, j)], dp[i] + 1);
		}
		for (int j = 1;; j++) {
			if (i + sqr(9, j) > n) {
                break;
            }
			dp[i + sqr(9, j)] = min(dp[i + sqr(9, j)], dp[i] + 1);
		}
	}
	cout << dp[n] << endl;
}