#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair

int t, ans = 0;
string s1, s2, s3;

int main(){
    map<string, int> m;
    m["polycarp"] = 1;
	cin >> t;
	while (t--) {
		cin >> s1 >> s2 >> s3;
		transform(s1.begin(), s1.end(), s1.begin(),::tolower);
		transform(s3.begin(), s3.end(), s3.begin(),::tolower);
		m[s1] = m[s3]+1;
        ans = max(ans,m[s1]);
	}
	cout << ans << endl;
}