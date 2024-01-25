#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll t, n, x, sum, cnt, ans;
mll freq;

int main() {
	fastio;
	cin >> t;
	while (t--) {
		sum = 0;
		ans = 0;
		freq.clear();
		cin >> n;
    	for (int i = 0; i < n; i++) {
        	cin >> x;
			freq[x]++;
    	}
        for (auto i : freq) {
            cnt = i.second;
            if (cnt >= 3) {
                ans += cnt*(cnt-1)*(cnt-2)/6;
            }
            if (cnt >= 2) {
                ans += (cnt*(cnt - 1)/2)*sum;
            }
            sum += cnt;
        }
        cout << ans << endl;
	}
}