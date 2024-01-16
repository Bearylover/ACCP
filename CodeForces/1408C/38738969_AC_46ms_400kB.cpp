#include<bits/stdc++.h>
using namespace std;
#define ll long long

double u, v, w, x, y, z;
int t, n, i, j;
int a[100008];

int main() {
    for(scanf("%d",&t); t--; printf("%lf\n",w+(y-x)/(i+n+1-j)),w=x=j=0) {
        for(scanf("%d%d",&n,&i),y=i; j++<n; scanf("%d",a+j));
        for(--j,i=1; i<=j; w+=z=min(u=(a[i]-x)/i,v=(y-a[j])/(n+1-j)),
                x+=z*i,y-=z*(n+1-j),u<v?++i:--j);
    }
}

/* percobaan pakai scanf dan printf */