#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int n, sum1, sum2, sum3;
int a[101];

int main() {
  fastio;
  cin >> n;
  n = 2*n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);
  sum1 = a[1] - a[0];
  for (int i = 3; i < n; i+=2) {
    sum2 = min(sum1, a[i-1]-a[i-2]+sum2);
    sum3 = min(sum2, a[i]-a[i-1]+sum3);
    sum1 = a[i]-a[i-1]+sum1;
  }
  cout << sum3 << endl;
}