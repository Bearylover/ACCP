#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second

int n, x, g, temp;
int a[1000001];

int main() {
	fastio;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> x;
		a[x]++;
		g = __gcd(g, x);
	}
	if (g > 1) {
		cout << "not coprime" << endl;
		return 0;
	}
	for (int i = 2; i <= 1000000; i++) {
		temp = 0;
		for (int j = i; j <= 1000000; j += i) {
			temp += a[j];
		}
		if (temp >= 2) {
		   cout << "setwise coprime" << endl;
		   return 0;
	    }
	}
	cout << "pairwise coprime" << endl;
}