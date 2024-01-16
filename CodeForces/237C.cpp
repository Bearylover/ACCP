#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1e9+7;

ll cnt[1000001];
ll a, b, k, l, r, mid, ans;
bool prime[1000001];
 
bool check(int val)
{
	for(int i=a;i<=b-val+1;i++) if(cnt[i+val-1]-cnt[i-1]<k) return false;
	return true;
}
 
int main() {
	cin >> a >> b >> k;
	prime[1] = true;
	for (int i = 2; i <= 1000; i++) {
		if (prime[i] == false) {
			for (int j = i*i; j <= 1000000; j += i) {
				prime[j]=true;
			}
		}
	}
	for (int i = 1; i <= 1000000; i++) {
		cnt[i] = cnt[i-1] + (!prime[i]);
	}
	ans = -1;
	l = 1;
	r = b-a+1;
	while (l <= r){
		mid = (l+r)/2;
		if(check(mid) == true) {
			ans = mid;
			r = mid-1;
		}
		else {
			l = mid+1;
		}
	}
	cout << ans << endl;
}