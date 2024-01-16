#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, x, ans;
int h[4], w[4];

int main() {
    for (int i = 1; i <= 3; i++) {
        cin >> h[i];
    }
    for (int i = 1; i <= 3; i++) {
        cin >> w[i];
    }
    for (int i = 1; i < 30; i++) {
        for (int j = 1; j < 30; j++) {
            for (int k = 1; k < 30; k++) {
                for (int l = 1; l < 30; l++) {
                    a = h[1] - i - j;
                    b = h[2] - k - l;
                    c = w[1] - i - k;
                    d = w[2] - j - l;
                    e = h[3] - c - d;
                    if (a>0 && b>0 && c>0 && d>0 && e>0 && a+b+e == w[3]) {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}