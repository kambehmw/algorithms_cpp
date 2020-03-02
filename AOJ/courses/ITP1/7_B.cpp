#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n, x;
        cin >> n >> x;
        if (n == 0 && x == 0) {
            break;
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= n; k++) {
                    if (i == j || j == k || k == i) {
                        continue;
                    }
                    if (i + j + k == x) {
                        cnt += 1;
                    }
                }
            }
        }
        cout << cnt / 6 << endl;
    }
    return 0;
}