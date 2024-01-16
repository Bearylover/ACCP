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

ll n, temp, x;
ll a[100001], b[100001], arr[16];
char c;
vector<ll> v;

int main() {
	fastio;
	cin >> n;
	x = 1;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		a[i] = c - '0';
		/*if (arr[i] == 9) {
			a[x] = 9;
			a[x+1] = 8;
			a[x+2] = 7;
			a[x+3] = 6;
			a[x+4] = 5;
			a[x+5] = 4;
			a[x+6] = 3;
			a[x+7] = 2;
			x += 8;
		} else if (arr[i] == 8) {
			a[x] = 8;
			a[x+1] = 7;
			a[x+2] = 6;
			a[x+3] = 5;
			a[x+4] = 4;
			a[x+5] = 3;
			a[x+6] = 2;
			x+=7;
		} else if (arr[i] == 7) {
			a[x] = 7;
			a[x+1] = 6;
			a[x+2] = 5;
			a[x+3] = 4;
			a[x+4] = 3;
			a[x+5] = 2;
			x+=6;
		} else if (arr[i] == 6) {
			a[x] = 6;
			a[x+1] = 5;
			a[x+2] = 4;
			a[x+3] = 3;
			a[x+4] = 2;
			x+=5;
		} else if (arr[i] == 5) {
			a[x] = 5;
			a[x+1] = 4;
			a[x+2] = 3;
			a[x+3] = 2;
			x+=4;
		} else if (arr[i] == 4) {
			a[x] = 4;
			a[x+1] = 3;
			a[x+2] = 2;
			x+=3;
		} else if (arr[i] == 3) {
			a[x] = 3;
			a[x+1] = 2;
			x+=2;
		} else if (arr[i] == 2) {
			a[x] = 2;
			x++;
		}*/
	}
	x = 1;
	for (int i = 1; i <= 1000; i++) {
		if (a[i] == 9) {
			b[x] = 7;
			b[x+1] = 3;
			b[x+2] = 3;
			b[x+3] = 2;
			x += 4;
		} else if (a[i] == 8) {
			b[x] = 7;
			b[x+1] = 2;
			b[x+2] = 2;
			b[x+3] = 2;
			x+=4;
		} else if (a[i] == 7) {
			b[x] = 7;
			x++;
		} else if (a[i] == 6) {
			b[x] = 3;
			b[x+1] = 5;
			x+=2;
		} else if (a[i] == 5) {
			b[x] = 5;
			x++;
		} else if (a[i] == 4) {
			b[x] = 2;
			b[x+1] = 2;
			b[x+2] = 3;
			x+=3;
		} else if (a[i] == 3) {
			b[x] = 3;
			x++;
		} else if (a[i] == 2) {
			b[x] = 2;
			x++;
		}
	}
	sort(b+1, b+x+3);
	for (int i = x+3; i >= 1; i--) {
		if (b[i] != 0) {
			cout << b[i];
		}
	}
	cout << endl;
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