#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int n, odd, even;
int a[101];

int main() {
	cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i]%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if (even == 1) {
        for (int i = 1; i <= n; i++) {
            if (a[i]%2 == 0) {
                cout << i << endl;
                return 0;
            }
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (a[i]%2 == 1) {
                cout << i << endl;
                return 0;
            }
        }
    }
} 