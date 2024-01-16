#include<bits/stdc++.h>
using namespace std;

int n, x, y;
int a[100001], freq[100001], z[1001];

int main() {
    cin >> n;
    for (int i = 1; i<=n-1; i++) {    
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i<=n; i++) {
        if (freq[i] == 0) {
            cout << i << endl;
            break;
        }
    }
}