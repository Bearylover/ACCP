#include<bits/stdc++.h>
using namespace std;

long n, m;
long a[1001];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
    }
    for (int i = n; i>0; i--) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    cout << m << endl;

}