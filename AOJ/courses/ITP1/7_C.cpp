#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int table[r+1][c+1];
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            cin >> table[i][j];
            sum += table[i][j];
        }
        table[i][c] = sum;
    }

    for (int i = 0; i < c; i++) {
        int sum = 0;
        for (int j = 0; j < r; j++) {
            sum += table[j][i];
        }
        table[r][i] = sum;
    }

    int total = 0;
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (i < r && j < c) {
                total += table[i][j];
            }
            if (i == r && j == c) {
                cout << total;
            } else {
                cout << table[i][j];
                if (j != c) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}