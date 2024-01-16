#include <bits/stdc++.h>
using namespace std;

long long n, total;
bool visited[4][4];

void solve(int a, int b, int c) {
    visited[a][b] = true;
    if (c <= n && 0 < c) {
        total++;
    } 
    if (c < n) {
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                if ((abs(a-i) != 0 && abs(a-i) != 2) || (abs(b-j) != 0 && abs(b-j) != 2)) {
                    if(!visited[i][j]) {
                        solve(i, j, c+1);
                    }
                } else {
                    if(visited[(a+i)/2][(b+j)/2] && !visited[i][j]) {
                        solve(i, j, c+1);
                    }
                }
            }
        }
    }
    visited[a][b] = false;
}

int main() {
    while (cin >> n) {
        total = 0;
        solve(1, 1, 0);
        solve(2, 1, 0);
        solve(3, 1, 0);
        solve(1, 2, 0);
        solve(2, 2, 0);
        solve(3, 2, 0);
        solve(1, 3, 0);
        solve(2, 3, 0);
        solve(3, 3, 0);
        cout << total << endl;
    }
}