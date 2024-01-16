#include<bits/stdc++.h>
using namespace std;

int n;
int a[101];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
        if (a[i]>=0) {
        a[i] = a[i] + 2;
        }
    }
    for (int i = 1; i<=n; i++) {
        cout << a[i];
        if (i == n) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}