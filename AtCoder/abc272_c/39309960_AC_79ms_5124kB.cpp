#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, m, j, l, r, mid, temp, odd1, odd2, even1, even2, ans1, ans2, ans3;
ll a[200001];
bool foundodd = false, foundeven = false, doneodd = false, doneeven = false;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = n; i >= 1; i--) {
        if (a[i]%2 == 1) {
            if (foundodd == false) {
                odd1 = a[i];
                foundodd = true;
            } else if (doneodd == false) {
                odd2 = a[i];
                doneodd = true;
            }
        } else {
            if (foundeven == false) {
                even1 = a[i];
                foundeven = true;
            } else if (doneeven == false) {
                even2 = a[i];
                doneeven = true;
            }
        }
    }
    ans1 = odd1 + odd2;
    ans2 = even1 + even2;
    if (ans1%2 == 1) {
        ans1 = -1;
    }
    if (ans2%2 == 1) {
        ans2 = -1;
    }
    if (odd2 == 0 && even2 == 0) {
        cout << "-1" << endl;
        return 0;
    }
    cout << max(ans1, ans2) << endl;
}