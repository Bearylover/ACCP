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

ll n;

int main() {
	fastio;
	cin >> n;
	for (int i = 0; i*1234567 <= n; i++) {
		for (int j = 0; j*123456 + i*1234567 <= n; j++) {
			if ((n-1234567*i-123456*j)%1234 == 0) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}

/*
 __         __
/  \.-"""-./  \
\    -   -    /
 |   o   o   |
 \  .-'''-.  /
  '-\__Y__/-'
     `---`
     Beary
*/