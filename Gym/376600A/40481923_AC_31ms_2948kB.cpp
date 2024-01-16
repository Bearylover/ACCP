#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, temp, a[100001], dp[100001], start[100001];
ll h = INT_MIN;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 || dp[i-1] < 0) {
            dp[i] = a[i];
            start[i] = i;
        } else {
            dp[i] = a[i] + dp[i-1];
            start[i] = start[i-1];
        }
    }
    for (int i = 1; i < n; i++) {
        if (dp[i] > h) {
            h = dp[i];
            temp = i;
        }
    }
    cout << start[temp] << " " << temp << endl;
}