#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

ll n, k, tempa, tempb, l, r, ans;
string s;

int main(){
    fastio;
	cin >> n >> k >> s;
	while (r < n) {
		if (s[r] == 'a') {
            tempa++;
        } else {
            tempb++;
        }
		if (tempa <= k || tempb <= k) {
			ans++;
			r++;
		} else {
			if (s[l] == 'a') {
                tempa--;
            } else {
                tempb--;
            }
			l++;
			r++;
		}
	}
	cout << ans << endl;
}