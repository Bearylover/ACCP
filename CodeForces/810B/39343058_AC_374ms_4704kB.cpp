#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct shop{
    ll x;
    ll y;
    ll z;
}p[200010];

bool cmp(shop a,shop b) {
    return a.z > b.z;
}

int n, f, i, j, k;
ll a, b, ans;

int main () {
    cin >> n >> f;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        if (a >= b) {
            ans += b;
        }
        else {
            p[k].x = a;
                p[k].y = b;
            if (a*2 <= b)
                p[k++].z = a;
            else
                p[k++].z = b-a;
        }
    }
    sort(p, p+k, cmp);
    for (i = 0; i < k; i++) {
        if (i < f) {
            ans += (p[i].x+p[i].z);
        }
        else {
            ans += p[i].x;
        }
    }
    cout << ans << endl;
}