#include<bits/stdc++.h>
using namespace std;

int n, x, y;
int a[1001], freq[1000001], z[1001];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i<=1000001; i++) {
        if (freq[i]>x) {
            x = freq[i];
        }
    }
    for (int i = 1; i<=n; i++) {    
        freq[a[i]]++;
        if (freq[a[i]] == x*2) {
            cout << a[i] << endl;
            break;
        }
    }
}