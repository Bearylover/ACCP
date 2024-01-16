#include <bits/stdc++.h>
using namespace std;

int x, ans, p;
bool done = false, pr = false;
bool prime[10000];

bool check(int b) {
    for (int i = 2; i<b; i++) {
        if (b%i == 0 || b == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    memset(prime, true, sizeof(prime));
    for (int i = 2; i <= 10000; i++) {
        if (prime[i] == true && check(i) == false) {
            prime[i] = false;
        }
    }
    while (done == false) {
        cin >> x;
        if (x == 0) {
            break;
        }
        for (int i = x-2; i >= 1; i--) {
            if (prime[i] == true && prime[i+2] == true) {
                cout << i << " " << i+2 << endl;
                break;
            }
        }
    }
}