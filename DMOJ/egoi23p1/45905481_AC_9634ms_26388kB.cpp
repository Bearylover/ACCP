#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

ll n, tot, inf, x, y, t, temp;
string s;
ll a[300001];
map<ll, ll> freq;

int main() {
	fastio;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		freq[a[i]]++;
		tot += a[i];
	}
	cin >> t;
	while (t--) {
		cin >> s;
		if (s == "INFLATION") {
			cin >> x;
			inf += x;
			tot += x*n;
		} else {
			cin >> x >> y;
			tot += freq[x-inf]*(y-x);
			temp = freq[x-inf];
			freq[x-inf] = 0;
			freq[y-inf] += temp;
		}
		cout << tot << endl;
	}
}