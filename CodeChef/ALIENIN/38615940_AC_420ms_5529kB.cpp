#include <bits/stdc++.h>
using namespace std;
#define ll long long

double m, mid, l, r, k, ans, temp, t, cd, d;
int n;
int a[200001];
bool banana(double c) {
    cd = 0;
    for (int i = 1; i <= n; i++) {
       if (cd > a[i] + d) {
           return false;
        } else if (cd < a[i]) {
            cd = a[i] + c;
        } else {
            cd = cd + c;
        }
    }
    return true;
}

int main() {
    cin >> t;
    for (int h = 1; h <= t; h++) {
        cin >> n >> d;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        r = 2e+9;
        l = 0;
        temp = 0;
        for (int i = 1; i <= 101; i++) {
            mid = (l+r)/2;
            if (banana(mid) == true) {
                temp = mid;
                l = mid;
            } else {
                r = mid;
            }
        }
        cout << fixed << setprecision(10) << temp << endl;
    }
}