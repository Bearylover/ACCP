#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[52][52];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    cout << m << " " << n << endl;
    for (int i = 1; i <= m; i++) {
        for (int j = n; j >= 1; j--) {
            cout << a[j][i];
            if (j == 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }
}