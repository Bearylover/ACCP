#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int n, diff, ans;
int a[1001];

int main() {
	cin >> n >> diff;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (abs(a[i]-a[j]) <= diff) {
                ans++;
            }
        }
    }
    cout << ans*2 << endl;
} 