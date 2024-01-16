#include<bits/stdc++.h>
using namespace std;

int n, x, y;
int a[101];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
    }
    for (int i = 1; i<=n; i++) {
        if (a[i] > x) {
           x = a[i]; 
        }
    }
    for (int i = 1; i<=n; i++) {
        y = y + (x-a[i]);
    }
    cout << y << endl;
}