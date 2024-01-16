#include<bits/stdc++.h>
typedef long long ll;

int main() {
	int t,a,b;
	ll n,x;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&a,&b);
		n = (ll)a*b;
		x = pow(n, 1.0/3) + 0.5; 
		if(x*x*x!=n || a%x!=0 || b%x!=0) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
	}
	return 0;
}