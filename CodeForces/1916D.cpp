#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9+7;

int t, n;
string arr[101][101];

int main() {
	fastio;
	arr[1][1] = "1";
	arr[2][1] = "169";
	arr[2][2] = "196";
	arr[2][3] = "961";
	for (int i = 3; i <= 99; i++) {
		for (int j = 1; j <= 2*i-3; j++) {
			arr[i][j] = arr[i-1][j] + "00";
		}
		arr[i][2*i-2].pb('1');
		for (int j = 1; j <= i-2; j++) {
			arr[i][2*i-2].pb('0');
		}
		arr[i][2*i-2].pb('6');
		for (int j = 1; j <= i-2; j++) {
			arr[i][2*i-2].pb('0');
		}
		arr[i][2*i-2].pb('9');
		arr[i][2*i-1].pb('9');
		for (int j = 1; j <= i-2; j++) {
			arr[i][2*i-1].pb('0');
		}
		arr[i][2*i-1].pb('6');
		for (int j = 1; j <= i-2; j++) {
			arr[i][2*i-1].pb('0');
		}
		arr[i][2*i-1].pb('1');
	}
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cout << arr[(n/2)+1][i] << endl;
		}
	}
}