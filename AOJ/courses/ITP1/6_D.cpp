#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < m; j ++) {
            total += A[i][j] * b[j];
        }
        cout << total << endl;
    }
    return 0;
}