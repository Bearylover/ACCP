#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, j;
ll ans;
string s;
int tree[200001];
queue<int> a[26];

void f(int x, int val) {
    while (x <= n) {
        tree[x] += val;
        x += (x & (-x));
    }
}
int cek(int x) {
    int cnt = 0;
    while (x > 0) {
        cnt += tree[x];
        x -= (x & (-x));
    }
    return cnt;
}
 
int main() {
    cin >> n >> s;
    string rs = s;
    reverse(rs.begin(), rs.end());
    s = '#' + s;
    rs = '#' + rs;
    for (int i = 1; i <= n; i++) {
        a[(s[i] - 'a')].push(i);
    }
    j = 1;
    ans = 0;
    for (int i = 1; i <= n; i++) {
        int x = a[(rs[i] - 'a')].front();
        int temp = x;
        a[(rs[i] - 'a')].pop();
        x += cek(x);
        ans += (ll)(x - i);
        f(1, 1);
        f(temp, -1);
    }
    cout << ans << endl;
}