#include<bits/stdc++.h>
using namespace std;

int n, x, y;
int a[100001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        x = x + a[i];
        if (x < 0) {
            x++;
            y++;
        }
    }
    cout << y << endl;
}