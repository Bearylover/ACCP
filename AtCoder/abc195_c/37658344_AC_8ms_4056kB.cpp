#include<bits/stdc++.h>
using namespace std;

long long n, x;

int main() {
    cin >> n;
    for (int i = 1; i<=n ;i++) {
        if (n >= pow(1000, i) && n < pow(1000, i+1)) {
            x = x + (n - pow(1000, i) + 1)*i; 
        } else if (n >= pow(1000, i) && n >= pow (1000, i+1)) {
            x = x + (pow(1000, i + 1) - pow(1000, i))*i;
        } else {
            break;
        }
    }
    cout << x << endl;
}