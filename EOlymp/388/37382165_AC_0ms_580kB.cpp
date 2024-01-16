#include<bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    cin >> n;
    while (n != 1) {
        if (n%2 == 0) {
            n = n/2;
        } else {
            n++;
        }
        x++;
    }
    cout << x << endl;
}