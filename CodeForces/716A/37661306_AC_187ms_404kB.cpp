#include<bits/stdc++.h>
using namespace std;

int n, c, x;
int a[100001];

int main() {
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i+1] <= a[i]+c) {
            x++;
        } else {
            x = 0;
        }
    }
    cout << x << endl;
}