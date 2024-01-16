#include<bits/stdc++.h>
using namespace std;

int width, length;

int main() {
    cin >> length >> width;
    for (int i = 1; i <= width; i++) {
        for (int j = 1; j <= length; j++) {
            if (i == 1 || j == 1 || i == width || j == length) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}