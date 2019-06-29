#include <iostream>
using namespace std;

const int MAX_N = 100;
const int MAX_W = 10000;

int n, W;
int w[MAX_N], v[MAX_N];

int dp[MAX_N + 1][MAX_W + 1];

int rec(int i, int j) {
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int res;
    if (i == n) {
        res = 0;
    } else if (j < w[i]) {
        res = rec(i + 1, j);
    } else {
        res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
    }
    dp[i][j] = res;
    return res;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    printf("%d\n", rec(0, W));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> w[i] >> v[i];
    cin >> W;

    solve();

    return 0;
}