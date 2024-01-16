#include <bits/stdc++.h>
using namespace std;
#define ll long long

double a[10001];
double k, sum, l, r, mid, temp;
int n;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    sort(a, a+n);
    l=a[0];
    r=a[n-1];
    while (l + 1e-8 <= r) {
        mid=(l+r)/2;
        temp=0;
        for (int i=0; i<n; i++){
            if(a[i] > mid)
            temp = temp + a[i] - mid;
        }
        if (sum - n*mid == k*temp/100) {
            cout << fixed << setprecision(7) << mid << endl;
        } else if (sum - n*mid > k*temp/100) {
            l=mid;
        } else {
            r=mid;
        }
    }
    cout << fixed << setprecision(7) << r << endl;
}