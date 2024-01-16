#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll b[200001];
ll waktu, n, ans;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    waktu = 0;
    ans = 0;
    for(int i = 0; i < n; i++) {
        if(waktu != b[i]) {
            ans = ans + abs(b[i]-waktu);
            waktu = b[i];
        }
    }
    cout << ans << endl;
}