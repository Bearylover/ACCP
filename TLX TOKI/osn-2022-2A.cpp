#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

ll n, m, q, u, v, p, c, cc, total;
ll arr[100001], daddy[100001], cnt[100001];
vector<pii> nodes, ans;
bool used[100001];
deque<pii> dq;
set<ll> temp;

int getthemilk (int a) {
	if (daddy[a] == a) {
		return a;
	}
	return daddy[a] = getthemilk(daddy[a]);
}

bool comp(pii a, pii b) {
	int x = getthemilk(a.se), y = getthemilk(b.se);
	if (cnt[x] != cnt[y]) {
		return cnt[x] > cnt[y];
	} else {
		return x < y;
	}
}

void join(int a, int b) {
	int x = getthemilk(a);
	int y = getthemilk(b);
	if (arr[x] > arr[y]) {
		daddy[x] = y;
	} else {
		daddy[y] = x;
	}
}

int main() {
	fastio;
	cin >> n >> m >> q;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		nodes.pb({arr[i], i});
		daddy[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		cin >> u >> v;
		join (u, v);
	}
	for (int i = 1; i <= n; i++) {
		temp.insert(getthemilk(i));
	}
	cc = temp.size();
	if (cc == 1) {
		cout << 0 << endl << 0 << endl;
		return 0;
	} else if (2*cc-2 > n) {
		cout << -1 << endl;
		return 0;
	}
	sort(nodes.begin(), nodes.end());
	for (int i = 1; i <= n; i++) {
		p = getthemilk(i);
		if (used[p] == false) {
			dq.pb({arr[p], p});
			used[p] = true;
			cnt[p]++;
		}
	}
	for (int i = 1, j = 1; i <= n && j <= cc-2; i++) {
		p = nodes[i].se;
		if (used[p] == false) {
			dq.pb({arr[p], p});
			used[p] = 1;
			cnt[getthemilk(p)]++;
			j++;
		}
	}
	for (auto i : dq) {
		total += i.fi;
	}
	
	sort(dq.begin(), dq.end(), comp);
	while (dq.empty() == false) {
		ans.pb({dq.front().se, dq.back().se});
		cnt[getthemilk(dq.front().se)]--;
		cnt[getthemilk(dq.back().se)]--;
		dq.pop_front();
		dq.pop_back();
		if (cnt[getthemilk(dq.front().se)] == 1) {
			dq.pb(dq.front());
			dq.pop_front();	
		}
	}
	cout << total << endl;
	if (q == 1) {
  	cout << ans.size() << endl;
  	for (auto i : ans) {
  		cout << i.fi << " " << i.se << endl;
  	}
	}
}
