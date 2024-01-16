#include<bits/stdc++.h>
using namespace std;

int x, cap, low, a;
string s;

int main() {
    cin >> s;
    x = s.length();
    for (int i = 0; i < x; i++) {
        if (s[i] < 'a') {
            cap++;
        } else {
            low++;
        }
    }
    if (cap > low) {
        for (int i = 0; i < x; i++) {
            if (s[i] >= 'a') {
                s[i] = s[i] - 'a' + 'A';
            }
        }
    } else {
        for (int i = 0; i < x; i++) {
            if (s[i] < 'a') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    }
    cout << s << endl;
}