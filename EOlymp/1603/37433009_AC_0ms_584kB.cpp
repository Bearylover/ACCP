#include<bits/stdc++.h>
using namespace std;

int n, m, x;

int main() {
    cin >> n;
    n = abs(n);
    while(n>0) {    
        m = n%10;    
        x = x + m;    
        n = n/10;
    }
    cout << x << endl;
}