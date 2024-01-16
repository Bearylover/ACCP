#include <bits/stdc++.h>
using namespace std;

double s, x, m, n, o, p, q, area;

double f(double a, double b, double c) {
    s = (a + b + c)/2;
    x = sqrt(s*(s-a)*(s-b)*(s-c));
    return x;
}
int main() {
    cin >> m >> n >> o;
    area = f(m, n, o);
    cout << fixed << setprecision(2) << (area/m)*2 << " " << (area/n)*2 << " " << (area/o)*2 << endl;
}