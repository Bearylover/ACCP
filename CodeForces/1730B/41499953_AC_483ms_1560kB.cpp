#include <bits/stdc++.h>
#define ll long long
using namespace std;

int m;

int main() {
    cin >> m;
    while (m--) {
        int n;
        cin >> n;
        ll int x[n];
        ll int m[n];
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }
        ll int low = INT_MAX;
        ll int high = INT_MIN;
        for (int i = 0; i < n; i++) {
            low = min(low, x[i] - m[i]);
            high = max(high, x[i] + m[i]);
        }
        double temp = (high - low)/2.0;
        double pos = temp + low;
        cout << fixed << setprecision(8) << pos << endl;
    }
 
    return 0;
}