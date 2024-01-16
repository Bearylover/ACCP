#include <bits/stdc++.h>
using namespace std;

struct number { 
    int x, y; 
}; 

number a[100001];
int n, ans;

bool compare(number p, number q) {
    return p.y < q.y;
}

void f(number a[], int c) {
    int i = 0; 
    for (int j = 1; j < c; j++) {
        if (a[j].x > a[i].y) {	 
			ans++;
			i = j; 
      	} 
    } 
} 

int main() {
    ans = 1;
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    sort(a, a+n, compare); 
	f(a, n);
    cout << ans << endl;
    return 0; 
}