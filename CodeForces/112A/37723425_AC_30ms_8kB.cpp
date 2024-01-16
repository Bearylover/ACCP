#include<bits/stdc++.h>
using namespace std;

int x;
string f, s;

int main() {
    cin >> f;
    cin >> s;
    x = s.length();
    for (int i = 0; i <= x; i++) {
        if (f[i] < 'a') {
            f[i] = f[i] - 'A' + 'a';
        }
        if (s[i] < 'a') {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    if (f > s) {
        cout << "1" << endl;
    } else if (s > f) {
        cout << "-1" << endl;
    } else {
        cout << "0" << endl;
    }
}