#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int p[200005], a[200005];
int t, n, l;

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
		l = 1;
        p[1] = 0;
		for (int i = 2; i <= n; i++) {
			if (a[i] < a[i-1]) {
				l++;
            }
			p[i] = p[l] + 1;
		}
	    cout << p[n] << endl; 
	}
}