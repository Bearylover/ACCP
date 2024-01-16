#include<bits/stdc++.h>
using namespace std;

int x;
string s;

int main() {
    cin >> s;
    x = s.length();
    cout << s[0] << x-2 << s[x-1] << endl;
}