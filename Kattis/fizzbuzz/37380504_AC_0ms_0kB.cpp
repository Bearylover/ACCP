#include<bits/stdc++.h>
using namespace std;

int x, y, n, a, b;

int main() {
    cin >> x >> y >> n;
    for(int i=1; i<=n; i++) {
        a = i%x;
        b = i%y;
        if (a<1 && b<1) {
            cout << "FizzBuzz" << endl;
        } else if (a<1) {
            cout << "Fizz" << endl;
        } else if (b<1) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}