#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio; cin.tie(0); cout.tie(0)
const ll mod = 1e9+7;

ll a, b;

int main() {
	fastio;
	cin >> a >> b;
	cout << (((b*(b-1))/2)%mod)*(((((a*(a+1)/2)%mod)*b)%mod+a)%mod)%mod << endl;
}