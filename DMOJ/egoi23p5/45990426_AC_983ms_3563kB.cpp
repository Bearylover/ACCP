#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

ll n, pos, x;
ll a[1001], nxt[1001], hate[1001];

int main() {
	fastio;
	cin >> n;
	memset(nxt, -1, sizeof(nxt));
	pos = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			hate[j] = false;
		}
		for (int j = 0; j < i; j++) {
			cin >> x;
			if (j >= (i+1)/2) {
				hate[x] = true;
			}
		}
		x = pos;
		if (hate[pos] == false) {
			nxt[i] = pos;
			pos = i;
			continue;
		}
		while (x != -1) {
			if (hate[x] == false && (nxt[x] == -1 || hate[nxt[x]] == false)) {
				nxt[i] = nxt[x];
				nxt[x] = i;
				break;
			}
			x = nxt[x];
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << pos << " ";
		pos = nxt[pos];
	}
	cout << endl;
}