#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, p, q, x, temp, y;
int ans[100001];
pair<int, int> b[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> p >> q;
    for (int i = 1; i <= n; i++) {
    	cin >> b[i].first;
    	b[i].second = i;
	}
	sort (b + 1, b + n + 1);
	x = 1;
	temp = -b[1].first;
	for (int i = 1; i <= n; i++) {
		temp += (b[i].first - b[i-1].first);
		while (x <= i && temp > p) {
			x++;
			temp -= b[x].first - b[x-1].first;
		}
		for (int j = x; j <= i; j++) {
			ans[b[j].second] = max(ans[b[j].second], i-x+1);
		}
	}
	while(q--) {
		cin >> y;
		cout << ans[y] << "\n";
	}
} 
