#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

ll n, m, k, a, b, mf, ans;

int main() {
	fastio;
	cin >> n >> m >> k >> a >> b;
	mf = min(a/2, b);
	ans = (mf/k)*3;
	cout << min(n/m-((n/m)%3), ans) << endl;
}
