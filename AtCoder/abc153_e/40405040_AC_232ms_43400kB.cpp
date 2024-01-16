#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, h, a[10001], b[10001], temp[10001][1001];
 
ll f(int h, int n){
    if (h <= 0) return 0;
    if (n == 1) {
        return b[n]+ f(h-a[n], n);
    }
    if (temp[h][n] != -1) return temp[h][n];
    ll hasil = min(b[n]+f(h-a[n], n), f(h, n-1));
    return temp[h][n] = hasil;
}
 
int main(){
    cin >> h >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i] >> b[i];
    }
    memset(temp, -1, sizeof(temp));
    cout << f(h, n) << endl;
}