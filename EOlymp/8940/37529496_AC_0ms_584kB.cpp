#include<bits/stdc++.h>
using namespace std;

int width, length;

int main() {
    cin >> width >> length;
    for (int i = 1; i <= width; i++) {
        for (int j = 1; j <= length; j++) {
            cout << "#";
        }
        cout << endl;
    }
}