#include<bits/stdc++.h>
using namespace std;

int x;

int main() {
    cin >> x;
    for(int i=2; i<=x; i++) {
        if (i%2 == 0) {
            cout << "I hate that ";
        } else {
            cout << "I love that ";
        }
    }
    if (x%2 == 1) {
        cout << "I hate it" << endl;
    } else {
        cout << "I love it" << endl;
    }
}