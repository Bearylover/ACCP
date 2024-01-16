#include<bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main() {
    cin >> n >> k;
    cin >> s;
    k = k-1;
    s[k] = s[k] - 'A' + 'a';
    cout << s << endl;
}