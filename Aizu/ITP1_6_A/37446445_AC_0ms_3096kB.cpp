#include<bits/stdc++.h>
using namespace std;

int n;
int a[101];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
    }
    for (int i = n; i>0; i--) {
        cout << a[i];
        if (i == 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}