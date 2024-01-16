#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[101][101];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j]; 
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= 1; j--) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}