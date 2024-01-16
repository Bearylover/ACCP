#include<bits/stdc++.h>
using namespace std;

int n, x;
int a[1001], freq[1001];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i<=n; i++) {
        if (freq[a[i]-1] > 0 && freq[a[i]+1] > 0) {
            cout << "YES" << endl;
            x++;
            break;
        }
    }
    if (x == 0) {
        cout << "NO" << endl;
    }
}