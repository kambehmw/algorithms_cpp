#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    int c;
    cin >> a >> b >> c;
    double PI = acos(-1);
    double rad = c * PI / 180;
    double S, L, h;
    S = 0.5 * a * b * sin(rad);
    L = a + b + sqrt(a * a + b * b - 2 * a * b * cos(rad));
    h = b * sin(rad);
    cout << fixed;
    cout << setprecision(5);
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;
    return 0;
}