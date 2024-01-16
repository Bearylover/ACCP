#include<bits/stdc++.h>
using namespace std;

int n, m, x;
int a[101], freq[101];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i<=101; i++) {
        if (freq[i]>x) {
            x = freq[i];
        }
    }
    if (x == 0) {
        x = 1;
    }
    cout << x << endl;
}