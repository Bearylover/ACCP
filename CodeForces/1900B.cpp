#include <bits/stdc++.h>
using namespace std;

int t,a,b,c;

int f(int a,int b) {
    if (abs(b-a) % 2) {
        return 0;
    } else {
        return 1;
    }
}
 
int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << f(b,c) << " " << f(a,c) << " "<< f(a,b) << endl;
    }
 
}