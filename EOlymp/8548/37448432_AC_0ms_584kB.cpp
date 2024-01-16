#include<bits/stdc++.h>
using namespace std;

int n, k, x;
int a[101];

int main() {
    cin >> n >> k;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
    }
    for (int z = 1; z<=n; z++) {
        for (int i = z+1; i<=n; i++) {
            if ((a[i]+a[z])%k == 0) {
                x++;
            }
        }
    }
    cout << x << endl;
}