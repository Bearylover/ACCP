#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, i, hi, a, k;
ll b[200001];

int main() {
	cin >> n;
	a = 0;
    k = 0;
	for(i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b, b+n);
	hi = b[n-1] - b[0];
	if(b[n-1] != b[0]) {
		for(i=0; i<n; i++) {
			if(b[i] == b[0]) {
				a++;
			}
			else {
				break;
			}
		}
		for(i = n-1; i >= 0; i--){
			if(b[i]==b[n-1]){
				k++;
			}
			else{
				break;
			}
		}
		cout << hi << " " << a*k << endl;
	}
	else {
		cout << hi << " " << n*(n-1)/2 << endl;
	}
}  