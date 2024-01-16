#include <bits/stdc++.h>
using namespace std;

int temp, n, ans, k, s;
int a[101];
bool x[101];
bool c = false;

bool check(int array[], int p) {   
    bool flag = true;
        for(int i = 1; i <= p; i++) {         
            if(array[i] != k)
                flag = false;
        }
    return flag;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int h = 1; h <= 1000; h++) {
        memset(x, false, sizeof(x));
        sort(a, a + n + 1);
        if (check(a, n) == true) {
            cout << ans << endl;
            break;
        }
        for (int i = 1; i <= n; i++) {
            if (x[a[i]] == false && a[i] + 1 <= k) {
                a[i] = a[i] + 1;
            }
            x[a[i] - 1] = true;
        }
        ans++;
    }
}