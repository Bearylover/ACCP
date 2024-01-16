#include <bits/stdc++.h>
using namespace std;

double s, x, m, n, o, p, q, area;

double f(double a, double b, double c) {
    s = (a + b + c)/2;
    x = sqrt(s*(s-a)*(s-b)*(s-c));
    return x;
}
int main() {
    cin >> m >> n >> o >> p >> q;
    area = f(m, n, q) + f(o, p, q);
    area = round(area*10000)/10000;
    cout << area << endl;
}