#include<bits/stdc++.h>
using namespace std;

long long n;

int main() {
    cin >> n;
    for(long long i = floor(sqrt(n)); i>=1; i--) {
        if (n%i == 0) {
            cout << i+n/i-2 << endl;
            break;
        }
    }
}