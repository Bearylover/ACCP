#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int n, ch;
string s, b;

int main() {
    cin >> n;
    while(n--) {
        cin >> s;
        b = s;
        sort(b.begin(), b.end());
        if(s == b) {
            cout << s << endl;
        } else {
            ch = 9;
            for (int i = s.length()-1; i >= 0; i--) {
                ch = min(ch, (s[i] - '0'));
                if((s[i] - '0') > ch){
                    int m = (s[i]-'0') + 1;
                    if (m > 9) {
                        m = 9;
                    }
                    s[i] = '0' + m; 
                }  
           }
           sort(s.begin(), s.end());
           cout << s << endl;
       }
    }
	
}
