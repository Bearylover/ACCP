#include <bits/stdc++.h>
using namespace std;

int temp, x;
int a[3];

int main() {
    cin >> a[0] >> a[1] >> a[2];
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, a + n);
    /* 
    
    */
    temp = a[2] - a[1];
    x = temp;
    a[1] = a[1] + temp;
    a[0] = a[0] + temp;
    if ((a[2] - a[0])%2 == 0) {
        x = x + ((a[2] - a[0])/2);
    } else {
        x = x + ((a[2] - (a[0]))/2) + 2;
    }
    cout << x << endl;
}