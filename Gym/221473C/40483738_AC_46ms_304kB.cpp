#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[5000], dp[5000], temp, last, ans[50017];

int hl(int x){
    if(dp[x]!=0)return dp[x];
    dp[x] = 1;
    // harunya coba semua y=0..x-1, pake for aja
    for(int y=0; y<x; y++){
        if(a[x]>a[y]){  // syarat bisa digabung a[y]<a[x]
            dp[x]=max(dp[x], dp[y]+1);
        }
    }
    return dp[x];
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }
    for(int i=0; i<n; i++){
        temp=max(temp,hl(i));
        if(temp==hl(i)){
            last=i;
        }
    }
    ans[temp]=a[last];
    cout << temp << endl;
    for(int i=last-1; i>=0; i--){
        if(dp[i]==dp[last]-1 && a[i]<a[last]){
            ans[dp[i]]=a[i];    
            last=i;
        }
    }
    for(int i=1; i<=temp; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
