#include <bits/stdc++.h>
using namespace std;

int n, a, b;
int x[500001];
int y[500001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i] >> a >> b;
    }
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++) {
        x[i] = abs(x[i]);
        y[i] = abs(y[i]);
        if (x[i]%2 == 1 && y[i]%2 == 1) {
            cout << "1" << endl;
        } else if (x[i]%2 == 1 && y[i]%2 == 0) {
            cout << "2" << endl;
        } else if (x[i]%2 == 0 && y[i]%2 == 1) {
            cout << "3" << endl;
        } else {
            cout << "4" << endl;
        }
    }
}