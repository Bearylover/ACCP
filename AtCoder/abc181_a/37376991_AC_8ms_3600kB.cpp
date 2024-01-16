#include<bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    cin >> n;
    x = n%2;
    if (x > 0) {
        cout << "Black" << endl;
    } else {
        cout << "White" << endl;
    }
}