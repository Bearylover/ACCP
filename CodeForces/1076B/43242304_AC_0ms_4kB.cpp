#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

ll n;

int main() {
    cin >> n;
    for(ll i = 2; i*i <= n; i++){
        if(n%i==0){
            cout << (n-i)/2+1 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}