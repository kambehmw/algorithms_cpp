#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int N;
long long a[100010][3];

long long dp[100010][3];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) continue;
                chmax(dp[i + 1][k], dp[i][j] + a[i][j]);
            }
        }
    }

    long long res = 0;
    for (int i = 0; i < 3; i++) chmax(res, dp[N][i]);
    cout << res << endl;

    return 0;
}