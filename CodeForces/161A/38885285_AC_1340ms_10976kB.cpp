#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct number {
    ll g;
    ll h;
};

bool compare(number p, number q) {
    if (p.g == q.g) return p.h < q.h;
    return p.g < q.g;
}

ll m, n, x, y, ans, temp;
number a[300001], b[300001];

int main() {
    vector<int> ind;
	cin >> n >> m >> x >> y;
	for (int i = 1; i <= n; i++) {
        cin >> a[i].g;
        a[i].h = i;
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i].g;
        b[i].h = i;
    }
    sort(a+1, a+n+1, compare);
    sort(b+1, b+m+1, compare);
    int i = 1;
    int j = 1;
    while (i <= n && j <= m) {
        if (a[i].g + y >= b[j].g && a[i].g - x <= b[j].g) {
            ans++;
            ind.push_back(i);
            ind.push_back(j);
            i++;
            j++;
        } else if (a[i].g + y < b[j].g) {
            i++;
        } else {
            j++;
        }
    }
    cout << ans << endl;
    for (auto r = ind.begin(); r != ind.end(); ++r){
        cout << *r << " ";
        ++r;
        cout << *r << endl;
    }
}