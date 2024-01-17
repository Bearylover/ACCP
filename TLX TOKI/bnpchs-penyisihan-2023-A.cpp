#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

int n, idx;
char c[1001], ans[1001];
bool b = true;

int main() {
	fastio;
	cin >> n;
	idx = 1;
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
		if (c[i] == '*') {
			b = !b;
		}
		if (b) {
			ans[idx] = c[i];
			idx++;
		}
	}
	for (int i = 1; i <= idx; i++) {
		if (ans[i] != '*') {
			cout << ans[i];
		}
	}
	cout << endl;
}
