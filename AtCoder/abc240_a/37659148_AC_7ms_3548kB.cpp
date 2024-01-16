#include<bits/stdc++.h>
using namespace std;

int a, b;
bool x = false;

int main() {
    cin >> a >> b;
    if (a+1 == b) {
        x = true;
    }
    if (a == 1 && b == 10) {
        x = true;
    }
    if (x == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}