#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int residents[4][3][10] = {};
    for (int i = 0; i < n; i++) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        b -= 1;
        f -= 1;
        r -= 1;
        residents[b][f][r] += v;
    }

    for (int b = 0; b < 4; b++) {
        for (int f = 0; f < 3; f++) {
            for (int r = 0; r < 10; r++) {
                cout << " " << residents[b][f][r];
            }
            cout << endl;
        }
        if (b < 3) {
            for (int i = 0; i < 20; i++) {
                cout << "#";
            }
            cout << endl;
        }
    }
    return 0;
}