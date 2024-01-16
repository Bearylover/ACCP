#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const ll mod = 1000000;

int n, v;

int main() {
	cin >> n >> v;
	if (n <= v) {
        cout << n-1 << endl;
    } else {
        cout << v + (n-v+2)*(n-v-1)/2 << endl;
    }
}