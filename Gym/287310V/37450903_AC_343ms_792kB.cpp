#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[100001], freq[100001];

int main() {
    cin >> n >> m;
    for (int i = 1; i<=n; i++) {    
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i<=m; i++) {
        cout << freq[i] << endl;
    }
}