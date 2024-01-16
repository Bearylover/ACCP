#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, t, ans;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        n--;
        ans = floor(sqrt(n));
        cout << ans << endl;
    }
}