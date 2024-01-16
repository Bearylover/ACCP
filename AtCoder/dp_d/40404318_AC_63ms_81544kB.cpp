#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
 
ll a[105][100005], w[105], v[105];
 
int main() {
    int n, W;
    cin >> n >> W;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    } 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (w[i - 1] > j) {
                a[i][j] = a[i - 1][j];
            } else {
                a[i][j] = max(a[i - 1][j], a[i - 1][j - w[i - 1]] + v[i - 1]);
            }
        }
    }
    cout << a[n][W];
}