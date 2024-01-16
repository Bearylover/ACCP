#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int total[101][101] = {0};

void f() {
    int no[101][101][2] = {0};
    no[1][0][0] = 1, no[1][0][1] = 1, total[1][0] = 2;
    no[1][1][0] = 0, no[1][1][1] = 0, total[1][1] = 0;
    for(int i = 2; i < 101; i++) {
        no[i][0][0] = total[i - 1][0];
        no[i][0][1] = no[i - 1][0][0];
        total[i][0] = no[i][0][0] + no[i][0][1];
        for(int j = 1; j < i; j++) {
            no[i][j][0] = total[i - 1][j];
            no[i][j][1]  = no[i - 1][j][0] + no[i - 1][j - 1][1];
            total[i][j] = no[i][j][0] + no[i][j][1];
        }
    }
}

int main() {
    f();
    int n;
    cin >> n;
    while (n--) {
        int i, bit, sbit;
        cin >> i >> bit >> sbit;
        cout << i << " " << total[bit][sbit] << endl;
    }
}