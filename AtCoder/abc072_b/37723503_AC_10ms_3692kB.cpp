#include<bits/stdc++.h>
using namespace std;

int x;
string s;

int main() {
    cin >> s;
    x = s.length();
    for (int i = 0; i < x; i += 2) {
        cout << s[i];
    }
    cout << endl;
}