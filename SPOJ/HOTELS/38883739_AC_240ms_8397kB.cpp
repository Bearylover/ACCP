#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll m, n, x, ans, temp;
ll a[300001], psum[300001];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        psum[i] = psum[i-1] + a[i];
    }
    int j = 1;
    for (int i = 1; i <= n; i++) {
        if (j < i) {
            j = i;
        }
        while (j <= n && psum[j] - psum[i-1] <= m) {
            ans = max(ans, psum[j] - psum[i-1]);
            j++;
        }
    }
    cout << ans << endl;
}