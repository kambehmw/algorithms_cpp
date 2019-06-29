#include <iostream>
using namespace std;

const int MAX_N = 100;
const int MAX_W = 10000;

int n, W;
int w[MAX_N], v[MAX_N];

int dp[MAX_N + 1][MAX_W + 1];

void solve() {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j <= W; j++) {
            if (j < w[i]) {
                dp[i + 1][j] = dp[i][j];
            } else {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }
        }
    }
    printf("%d\n", dp[n][W]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> w[i] >> v[i];
    cin >> W;

    solve();

    return 0;
}