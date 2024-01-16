#include <bits/stdc++.h>
using namespace std;
#define ll long long

double m, n, mid, l, r, k, ans, temp, t;
double a[101];

double banana(double c) {
    c = c*c + sqrt(c);
    return c;
}

int main() {
    cin >> n;
    r = 1e+10;
    l = 0;
    temp = 0;
    for (int i = 1; i <= 10001; i++) {
        mid = (l+r)/2;
        if (banana(mid) >= n) {
            temp = mid;
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << fixed << setprecision(6) << temp << endl;
}