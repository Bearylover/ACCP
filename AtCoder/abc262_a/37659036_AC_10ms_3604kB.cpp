#include<bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    cin >> n;
    while (n%4 != 2) {
        n++;
    }
    cout << n << endl;
}