#include<bits/stdc++.h>
using namespace std;

long n, m, x, y, a;

int main() {
    cin >> n;
    while(n>0) {    
        m = n%10;
        a++;
        if (a%2 == 0) {
            x = x + m;
        } else {
            y = y + m;
        }
        n = n/10;
    }
    cout << x*y << endl;
}