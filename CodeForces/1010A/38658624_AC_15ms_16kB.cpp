#include<bits/stdc++.h>
using namespace std;

double con = 1e-12;
int check(double x) {
	if (x < -con) return -1;
	if (x > con) return 1;
	return 0;
}

int n, m;
double ans;
int a[1001], b[1001];

bool solve(int n,int m,double x) {
	for(int i = 1; i <= n; i++) {
		double tmp = (x + m)/a[i];
		if(check(x - tmp) == -1) {
			return false;
		}
		x = x - tmp;
		tmp = (x + m)/b[i];
		if(check(x - tmp) == -1) {
			return false;
		}
		x = x - tmp;
	}
	return true;
}

double search(int n,int m) {
	double l = 0;
	double r = 1e9;
	double mid;
	for(int i = 1; i <= 200; i++) {
		mid=(l + r)*0.5;
		if(solve(n,m,mid))
			r = mid;
		else
			l = mid;
	}
	if(check(l - 1e9) != 0) {
		return l;
	} else {
		return -1;
	}
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
	    cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
	    cin >> b[i];
	}
	ans = search(n,m);
	if(check(ans+1)==0) {
		cout << "-1" << endl;
	} else {
		cout << fixed << setprecision(10) << ans << endl;
	}
}