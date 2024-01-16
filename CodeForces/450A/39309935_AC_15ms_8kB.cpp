#include <bits/stdc++.h>
using namespace std;
#define ll long long

int x, n, m, ans, temp, candy;

int main() {
    cin >> x >> n;
    for(int i = 1; i <= x; i++) {
        int candy;
        cin >> candy;
        temp = candy/n + (candy%n != 0);
        if(temp >=  m) {
            m = temp;
            ans = i;
        }
    }
    cout << ans << endl;
}