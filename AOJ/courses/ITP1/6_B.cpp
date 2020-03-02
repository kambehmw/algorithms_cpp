#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cards[4][14] = {};
    for (int i = 0; i < n; i++) {
        char c;
        int num;
        cin >> c >> num;
        if (c == 'S') {
            cards[0][num] = 1;
        } else if (c == 'H') {
            cards[1][num] = 1;
        } else if (c == 'C') {
            cards[2][num] = 1;
        } else if (c == 'D') {
            cards[3][num] = 1;
        }
    }
    char pattern[4] = {'S', 'H', 'C', 'D'};
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 14; j++) {
            if (!cards[i][j]) {
                cout << pattern[i] << " " << j << endl;
            }
        }
    }
    cout << endl;
    return 0;
}