#include<bits/stdc++.h>
using namespace std;

int x, y;
string s;

int main() {
    cin >> s;
    x = s.length();
    for (int i = 0; i < x; i++) {
        y += s[i] - '0';
    }
    cout << y << endl;
}