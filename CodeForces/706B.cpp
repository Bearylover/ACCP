#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll m, n, mid, l, r, k, ans, temp;
ll a[200001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> k;
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= k; i++) {
        cin >> m;
        l = 1;
        r = n;
        temp = 0;
        while (l <= r) {
            mid = (l+r)/2;
            if (m < a[mid]) {
                r = mid - 1;
            } else {
                temp = mid;
                l = mid + 1;
            }
        }
        cout << temp << endl;
    }
}