#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, ans;
int a[500001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i+=2) {
        if (a[i] == a[i+1]) {
            ans++;
        } else {
            i--;
        }
    }
    cout << ans << endl;
}