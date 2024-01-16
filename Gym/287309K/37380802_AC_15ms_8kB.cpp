#include<bits/stdc++.h>
using namespace std;

int n, a;

int main() {
    cin >> n;
    for(int i=1; i<=n; i++) {
        a = n%i;
        if (a<1) {
            cout << i << endl;
        }
    }
}