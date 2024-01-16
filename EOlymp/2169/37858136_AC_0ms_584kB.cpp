#include <bits/stdc++.h>
using namespace std;

int n;
int a[9];
bool used[10];

void solve(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            cout << a[i];
            if (i == n) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (used[i] == false) {
                a[x] = i;
                used[i] = true;
                solve(x+1);
                used[i] = false;
            }
        }
    }
}

int main() {
    memset(used, false, sizeof(used));
    cin >> n;
    solve(1);
}