#include<bits/stdc++.h>
using namespace std;

int n, m, x, y;
int a[101][101];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j]; 
        }
    }
    cin >> x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == x) {
                y++;
                break;
            } 
        }
    }
    if (y > 0) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }
}