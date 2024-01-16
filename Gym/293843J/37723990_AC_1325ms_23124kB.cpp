#include<bits/stdc++.h>
using namespace std;

int x, y, freq[26];
string s;

int main() {
    cin >> s;
    x = s.length();
    for(int i = 0; i < x; i++) {
        freq[s[i]-'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
        cout << char(i+'a') << " : " << freq[i] << endl;
        }
    }
}