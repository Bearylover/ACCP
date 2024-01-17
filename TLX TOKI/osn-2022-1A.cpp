#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long m, n, x, ans;

int main() {
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		ans = 0;
		if (x%(m+1)) {
			if (x%(m+1) <= (m+1)/2) {
				if (x/(m+1) < x%(m+1)) {
					ans++;
				}
			}
		} else {
			ans += max(m/2 - x/(m + 1) + 1, 0ll);
		}
		if (x%(m+2)) {
			if (x%(m+2) > m - m/2) {
				if(x/(m+2) <= m - x%(m+2)) {
					ans++;
				}
			}
		} else {
			ans += max((m-1)/2 - x/(m+2)+ 1, 0ll);
		}
		cout << ans << endl;
	}
}
