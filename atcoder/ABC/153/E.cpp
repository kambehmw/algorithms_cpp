#include <iostream>
#include <vector>
using namespace std;
const int HMAX = 11000;
const int NMAX = 1100;
#define INF 100000000

int dp[NMAX][HMAX];

int main() {
    int H, N;
    cin >> H >> N;

    vector<int> A, B;
    int a, b;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }

    // DP初期条件: dp[i][0] = 0
    for (int i = 0; i < NMAX; ++i) for (int h = 0; h < HMAX; ++h) dp[i][h] = INF;
    for (int i = 0; i <= N; ++i) dp[i][0] = 0;

    // DPループ
    for (int i = 0; i < N; ++i) {
        for (int h = 0; h < HMAX; ++h) {
            dp[i + 1][h] = min(dp[i + 1][h], dp[i][h]);
            if (h >= A[i]) dp[i + 1][h] = min(dp[i + 1][h], dp[i + 1][h - A[i]] + B[i]);
        }
    }

    int i = H;
    int ans = INF;
    while (i < HMAX) {
        ans = min(ans, dp[N][i]);
        i += 1;
    }
    cout << ans << endl;
}