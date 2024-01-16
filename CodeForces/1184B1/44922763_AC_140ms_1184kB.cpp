#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pii pair<int, int>

int n, m, ans, l, r, mid, goal;
int a[100001];
pii b[100001];

int main() {
  fastio;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> b[i].fi >> b[i].se;
  }
  sort(b+1, b+m+1);
  for (int i = 2; i <= m; i++) {
    b[i].se = b[i].se + b[i-1].se;
  }
  for (int i = 1; i <= n; i++) {
    goal = a[i];
    ans = 0;
    l = 1;
    r = m;
    while (l <= r) {
      mid = (l+r)/2;
      if (b[mid].fi <= goal) {
        l = mid + 1;
        ans = b[mid].se;
      } else {
        r = mid - 1;
      }
    }
    cout << ans;
    if (i != n) {
      cout << " ";
    }
  }
}