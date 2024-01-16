#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int gcd(int u, int v) {
  if (u % v == 0) {
    return v;
  } else {
    return gcd(v, u % v);
  }
}

int lcm(int u, int v) {
    return u*v/gcd(u, v);
}


int main() {
  int n, X;
  cin >> n >> X;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x.at(i);
    x.at(i) -= X;
    if (x.at(i) < 0) x.at(i) = -x.at(i);
  }
  int ans = 0;
  if (n == 1) {
    cout << x[0] << endl;
    return 0;
  }
  ans = gcd(x.at(0), x.at(1));
  for (int i = 2; i < n; i++) {
    ans = gcd(ans, x.at(i));
  }
  cout << ans << endl;
}