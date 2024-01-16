#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, ans, x, a, b;

void solve() {
	cin >> n;
	ans = 0;
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		q.push(x);
		ans += x;
	}
	while (q.size() > 1) {
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		if (a + b < 0) {
			ans += 2 * abs(a + b);
		}	
	}
	cout << ans << endl;
}
 
int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
	    solve();
    }
}