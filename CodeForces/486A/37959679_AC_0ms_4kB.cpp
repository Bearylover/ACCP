#include <bits/stdc++.h>
using namespace std;

long long n;
bool odd = true;

int main() {
    cin >> n;
    if (n%2 == 0) {
        odd = false;
    }
    if (odd == true) {
        cout << "-" << (n/2)+1 << endl;
    } else {
        cout << n/2 << endl;
    }
}