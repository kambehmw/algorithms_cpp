#include <iostream>
using namespace std;

int main() {
    while (true) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) {
            break;
        }
        if (m == -1 || f == -1) {
            cout << "F";
        } else if (80 <= m + f) {
            cout << "A";
        } else if (65 <= m + f) {
            cout << "B";
        } else if (50 <= m + f) {
            cout << "C";
        } else if (30 <= m + f) {
            if (50 <= r) {
                cout << "C";
            } else {
                cout << "D";
            }
        } else {
            cout << "F";
        }
        cout << endl;
    }
    return 0;
}