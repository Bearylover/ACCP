#include <iostream>
#include <string.h>
using namespace std;
#define ll long long
const ll mod = 998244353;

char a[260][1000], b[1000];
int n;

void add(char b[],char c[],char d[]) {
    int i, j, k, dig, x, y, z, t;
    k = 0;
    dig = 0;
    i = strlen(b) - 1;
    j = strlen(c) - 1;
    while(i >= 0 || j >= 0) {
        if (i < 0) {
            x = 0;
        } else {
            x = b[i] - '0';
        }
        if (j < 0) {
            y = 0;
        } else {
            y = c[j]-'0';
        }
        z = x + y + dig;
        if(z > 9) {
            dig = 1;
            z = z - 10;
        }
        else {
            dig = 0;
        }
        d[k++]=z+'0';
        i--,j--;
    }
    if (dig) {
        d[k++] = '1';
    }
    d[k] = '\0';
    for (i = 0; i < k/2; i++) {
        t = d[i];
        d[i] = d[k-i-1];
        d[k-i-1] = t;
    }
}

int main() {
    strcpy(a[0], "1");
    strcpy(a[1], "1");
    for(int i = 2; i <= 250; i++) {
        add(a[i-2], a[i-2], b);
        add(a[i-1], b, a[i]);
    }
    while(cin >> n) {
        cout << a[n] << endl;
    }
}