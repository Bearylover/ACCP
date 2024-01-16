#include<bits/stdc++.h>
using namespace std;

int t, n, h, m, total, x, ans, y;
int hour, minute, alarm, sleep;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ans = 2881;
        cin >> alarm >> hour >> minute;
        sleep = hour*60 + minute;
        for (int j = 1; j <= alarm; j++) {
            cin >> h >> m;
            x = h*60 + m;
            if (sleep > x) {
                x = x + 1440;
            }
            y = x - sleep;
            if (ans > y) {
                ans = y;
            }
        }
        cout << ans/60 << " " << ans%60 << endl;
    }
}