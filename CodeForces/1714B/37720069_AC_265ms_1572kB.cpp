#include<bits/stdc++.h>
using namespace std;

int t, n, h, m, total, x, ans, y;
int a[200001], freq[200001];

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        for (int j = 1; j <= n; j++) {
            freq[j] = 0;
        }
        total = 0;
        cin >> n;
        for (int j = 1; j <= n; j++) {
            cin >> a[j];
        }
        for (int j = n; j >= 1; j--) {
            if (freq[a[j]] > 0) {
                break;
            }
            freq[a[j]]++;
            total++;
        }
        cout << n - total << endl;
    }
}