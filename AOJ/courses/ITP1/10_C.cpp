#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        int s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        double ave = 0.0;
        for (int i = 0; i < n; i++) {
            ave += s[i];
        }
        ave /= n;

        double var = 0.0;
        for (int i = 0; i < n; i++) {
            var += pow(s[i] - ave, 2);
        }
        var /= n;
        cout << fixed << setprecision(5);
        cout << sqrt(var) << endl;
    }
    return 0;
}