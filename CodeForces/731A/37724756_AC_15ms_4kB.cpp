#include <bits/stdc++.h>
using namespace std;

int x, y, z, a;
string s;

int main() {
    cin >> s;
    a = s.length();
    for(int i = 0; i < a; i++) {
        z = s[i] - 'a';
        x += min(abs(y-z), min(y+26-z, 26-y+z));
        y = z;
    }
    cout << x << endl;
}