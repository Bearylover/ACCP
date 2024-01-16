#include <bits/stdc++.h>
using namespace std;
#define ll long long

int L[300001], R[300001];
int n;
char a;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if (a=='W') {
			L[i]++;
		} else {
			R[i]++;
		}
		L[i] += L[i-1];
	}
	for(int i = n; i; i--) {
		R[i] += R[i+1];
	}
	int ans = 1 << 30;
	for(int i = 1; i <= n; i++) {
		ans = min(ans, L[i-1] + R[i+1]);
	}
	cout << ans;
}