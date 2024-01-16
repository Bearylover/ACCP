#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll n, temp, x, ans;
ll a[200001], diff[200001];

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  x = a[1];
  for (int i = 2; i <= n; i++) {
    x = max(x, a[i]);
  }
  for (int i = 1; i <= n; i++) {
    diff[i] = x-a[i];
  }
  temp = diff[1];
  for (int i = 1; i <= n; i++) {
    temp = gcd(temp, diff[i]);
  }
  for (int i = 1; i <= n; i++) {
    ans += diff[i]/temp;
  }
  cout << ans << " " << temp << endl;
}