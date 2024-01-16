#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
 
int main() {    
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector b(n + 1, vector<long long>(m + 1, -1e18));
	for (int i = 0; i <= n; i++)
		b[i][0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= min(i, m); j++) {
			b[i][j] = max(b[i-1][j], b[i-1][j-1] + j*a[i-1]);
		}
 	}
 	cout << b[n][m] << endl;
}