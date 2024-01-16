#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a, b, c, d, e, f;

int main() {
    cin >> n;
    cin >> a >> b >> c;
    vector<int> vec(n+1);
    for(int i = 1; i <= n; i++) {
        d = e = f = -1;
        if(i >= a) {
            d = vec[i-a];
        }
        if(i >= b) {
            e = vec[i-b];
        }
        if(i >= c) {
            f = vec[i-c];
        }
        if(d == -1 && e == -1 && f == -1) {
            vec[i] = -1;
        } else {
            vec[i]=max(max(d,e),f)+1;
        }
    }
    cout << vec[n] << endl;
}