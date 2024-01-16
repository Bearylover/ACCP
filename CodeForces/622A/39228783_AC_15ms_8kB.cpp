#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, ans;

int main() {
    cin >> n;
    m = (ll)floor((-1 + sqrt(1 + 8*n - 8)) / 2);
    ans = (m * (m + 1)) / 2 + 1;
    cout << n - ans + 1;
}