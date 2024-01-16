#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x, y, g;
bool check[1001][1001];

void wheeeee(int p, int q, int r) {
	check[p][q] = false;
        for(int l = q; l <= 1000; l++) {
            if(check[p][l] == true) {
                wheeeee(p, l, 3);
                break;
            }
        }
        for (int l = p; l <= 1000; l++) {
            if (check[l][q] == true) {
                wheeeee(l, q, 4);
                break;
            }
        }		
        for (int l = q; l >= 0; l--) {
            if(check[p][l] == true) {
                wheeeee(p, l, 1);
                break;
            }
        }
        for(int l = p; l >= 0; l--) {
            if(check[l][q] == true) {
                wheeeee(l, q, 2);
                break;
            }
	}
}

int main() {
	memset(check, 0, sizeof(check)); 
	cin >> n;
	for(int p = 0; p < n; p++) {
		cin >> x >> y;
		check[x][y] = true;
	}
	for(int p = 1; p <= 1000; p++) {
		for(int q = 1; q <= 1000; q++) {
			if(check[p][q] == true) {
				wheeeee(p, q, 0);
				g++;
			}
		}
	}
	cout << g - 1 << endl;
} 