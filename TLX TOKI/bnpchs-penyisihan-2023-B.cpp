#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)

ll n;
char c[300001], chk1[300001], chk2[300001], chk3[300001], chk4[300001], chk5[300001], chk6[300001];
bool b1 = true, b2 = true, b3 = true, b4 = true, b5 = true, b6 = true;

int main() {
	fastio;
	cin >> n;
	for (int i = 1; i <= n; i += 3) {
		chk1[i] = 'a';
		chk1[i+1] = 'b';
		chk1[i+2] = 'c';
	}
	for (int i = 1; i <= n; i += 3) {
		chk2[i] = 'a';
		chk2[i+1] = 'c';
		chk2[i+2] = 'b';
	}
	for (int i = 1; i <= n; i += 3) {
		chk3[i] = 'b';
		chk3[i+1] = 'a';
		chk3[i+2] = 'c';
	}
	for (int i = 1; i <= n; i += 3) {
		chk4[i] = 'b';
		chk4[i+1] = 'c';
		chk4[i+2] = 'a';
	}
	for (int i = 1; i <= n; i += 3) {
		chk5[i] = 'c';
		chk5[i+1] = 'a';
		chk5[i+2] = 'b';
	}
	for (int i = 1; i <= n; i += 3) {
		chk6[i] = 'c';
		chk6[i+1] = 'b';
		chk6[i+2] = 'a';
	}
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] != '.' && c[i] != chk1[i]) {
			b1 = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] != '.' && c[i] != chk2[i]) {
			b2 = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] != '.' && c[i] != chk3[i]) {
			b3 = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] != '.' && c[i] != chk4[i]) {
			b4 = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] != '.' && c[i] != chk5[i]) {
			b5 = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] != '.' && c[i] != chk6[i]) {
			b6 = false;
		}
	}
	if (b1) {
		for (int i = 1; i <= n; i++) {
			cout << chk1[i];
		}
		cout << endl;
	} else if (b2) {
		for (int i = 1; i <= n; i++) {
			cout << chk2[i];
		}
		cout << endl;
	} else if (b3) {
		for (int i = 1; i <= n; i++) {
			cout << chk3[i];
		}
		cout << endl;
	} else if (b4) {
		for (int i = 1; i <= n; i++) {
			cout << chk4[i];
		}
		cout << endl;
	} else if (b5) {
		for (int i = 1; i <= n; i++) {
			cout << chk5[i];
		}
		cout << endl;
	} else if (b6) {
		for (int i = 1; i <= n; i++) {
			cout << chk6[i];
		}
		cout << endl;
	} else {
		cout << -1 << endl;
	}
}
