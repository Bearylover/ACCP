#include<bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
                cout << "*";
        }
        cout << endl;
    }
}