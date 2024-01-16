#include <bits/stdc++.h>
using namespace std;

int l, r, mid, sedge, base, height, ans;
string s;

int main() {
    l = 1;
    r = 1000;
    while (l <= r) {
        mid = (l+r)/2;
        cout << "? " << mid << " 0"<< endl;
        cin >> s;
        if (s == "YES") {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    mid = (l+r)/2;
    sedge = mid*2;
    l = 1;
    r = 1000;
    while (l <= r) {
        mid = (l+r)/2;
        cout << "? " << mid << " " << sedge << endl;
        cin >> s;
        if (s == "YES") {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    mid = (l+r)/2;
    base = mid*2;
    l = 1;
    r = 1000;
    while (l <= r) {
        mid = (l+r)/2;
        cout << "? 0 " << mid << endl;
        cin >> s;
        if (s == "YES") {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    mid = (l+r)/2;
    height = mid - sedge;
    ans = ((height*base)/2)+(sedge*sedge);
    cout << "! " << ans << endl;
}